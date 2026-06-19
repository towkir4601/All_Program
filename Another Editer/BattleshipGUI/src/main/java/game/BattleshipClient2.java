package game;
import javafx.application.Application;
import javafx.application.Platform;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.VBox;
import javafx.scene.media.Media;
import javafx.scene.media.MediaPlayer;
import javafx.stage.Stage;

import java.io.*;
import java.net.*;
import java.util.Objects;

public class BattleshipClient2 extends Application {
    private static final String SERVER_IP = "127.0.0.1";
    private static final int PORT = 5555;

    private Socket socket;
    private PrintWriter out;
    private BufferedReader in;

    private Label statusLabel;
    private Button[][] boardButtons = new Button[5][5];
    private boolean isGameStatePlaceShip = true;
    private boolean isMyTurn = false;

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage primaryStage) {
        primaryStage.setTitle("Battleship Game - Player 2");

        statusLabel = new Label("Connecting to server...");
        statusLabel.setStyle("-fx-font-size: 16px; -fx-font-weight: bold;");

        GridPane gridPane = new GridPane();
        gridPane.setAlignment(Pos.CENTER);
        gridPane.setHgap(5);
        gridPane.setVgap(5);

        // ৫x৫ গ্রিড বাটন তৈরি
        for (int r = 0; r < 5; r++) {
            for (int c = 0; c < 5; c++) {
                Button btn = new Button(".");
                btn.setPrefSize(60, 60);
                btn.setStyle("-fx-font-size: 14px; -fx-background-color: #ADD8E6;"); // হালকা নীল পানি
                final int row = r;
                final int col = c;

                btn.setOnAction(e -> handleButtonClick(row, col, btn));
                boardButtons[r][c] = btn;
                gridPane.add(btn, c, r);
            }
        }

        VBox root = new VBox(15, statusLabel, gridPane);
        root.setAlignment(Pos.CENTER);
        root.setStyle("-fx-padding: 20px;");

        Scene scene = new Scene(root, 400, 450);
        primaryStage.setScene(scene);
        primaryStage.show();

        // ব্যাকগ্রাউন্ড থ্রেডে সার্ভারের সাথে কানেক্ট করা
        new Thread(this::connectToServer).start();
    }

    private void connectToServer() {
        try {
            socket = new Socket(SERVER_IP, PORT);
            out = new PrintWriter(socket.getOutputStream(), true);
            in = new BufferedReader(new InputStreamReader(socket.getInputStream()));

            String welcomeMsg = in.readLine();
            Platform.runLater(() -> statusLabel.setText(welcomeMsg));

            String startSignal = in.readLine();
            if (startSignal.equals("START")) {
                Platform.runLater(() -> statusLabel.setText("Place your Battleship! Click any cell."));
            }

            // গেমের লাইভ আপডেট শোনার লুপ
            while (true) {
                String status = in.readLine();
                if (status == null) break;

                if (status.equals("YOUR_TURN")) {
                    isMyTurn = true;
                    Platform.runLater(() -> statusLabel.setText("🟢 Your Turn! Attack the enemy."));
                } else if (status.equals("WAIT")) {
                    isMyTurn = false;
                    Platform.runLater(() -> statusLabel.setText("🔴 Waiting for opponent's move..."));
                } else if (status.startsWith("HIT_LOSE")) {
                    playSound("hit.mp3");
                    Platform.runLater(() -> statusLabel.setText("💥 BOOM! You LOSE! 💀"));
                    break;
                } else if (status.startsWith("OPPONENT_MISS")) {
                    playSound("miss.mp3");
                    Platform.runLater(() -> statusLabel.setText("💨 Enemy Missed! Your turn."));
                }
            }
        } catch (IOException e) {
            Platform.runLater(() -> statusLabel.setText("Connection Error!"));
        }
    }

    private void handleButtonClick(int row, int col, Button btn) {
        if (isGameStatePlaceShip) {
            // জাহাজ বসানোর লজিক
            out.println(row + "," + col);
            btn.setText("🚢"); // জাহাজের ইমোজি/আইকন
            btn.setStyle("-fx-background-color: #8B8000; -fx-font-size: 16px;"); // সোনালী রঙের বোট
            isGameStatePlaceShip = false;
            statusLabel.setText("Ship placed. Waiting for match...");
        } else if (isMyTurn) {
            // আক্রমণ করার লজিক
            out.println(row + "," + col);
            isMyTurn = false;

            try {
                String result = in.readLine();
                if (result.equals("HIT_WIN")) {
                    playSound("hit.mp3");
                    btn.setText("💥");
                    btn.setStyle("-fx-background-color: #FF4500;");
                    statusLabel.setText("🎉 YOU WIN! Enemy sank! 🎉");
                } else if (result.equals("MISS")) {
                    playSound("miss.mp3");
                    btn.setText("💦");
                    btn.setStyle("-fx-background-color: #D3D3D3;");
                    statusLabel.setText("💦 MISS! No ship there.");
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }

    // 🎵 সাউন্ড প্লে করার মেথড
    private void playSound(String soundFile) {
        try {
            String path = Objects.requireNonNull(getClass().getResource("/assets/" + soundFile)).toExternalForm();
            Media media = new Media(path);
            MediaPlayer mediaPlayer = new MediaPlayer(media);
            mediaPlayer.play();
        } catch (Exception e) {
            System.out.println("Sound file not found or unsupported.");
        }
    }
}