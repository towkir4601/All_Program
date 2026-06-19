package game; // এই লাইনটি অবশ্যই লাগবে

import java.io.*;
import java.net.*;

public class BattleshipServer {
    private static final int PORT = 5555;
    private static Socket player1 = null;
    private static Socket player2 = null;
    private static PrintWriter out1, out2;
    private static BufferedReader in1, in2;
    private static String ship1, ship2;

    public static void main(String[] args) {
        System.out.println("[SERVER STARTED] Listening on port " + PORT + "...");
        try (ServerSocket serverSocket = new ServerSocket(PORT)) {

            player1 = serverSocket.accept();
            out1 = new PrintWriter(player1.getOutputStream(), true);
            in1 = new BufferedReader(new InputStreamReader(player1.getInputStream()));
            out1.println("WELCOME Player 1. Wait for Player 2...");
            System.out.println("[CONNECTION] Player 1 connected.");

            player2 = serverSocket.accept();
            out2 = new PrintWriter(player2.getOutputStream(), true);
            in2 = new BufferedReader(new InputStreamReader(player2.getInputStream()));
            out2.println("WELCOME Player 2. Match Starting...");
            System.out.println("[CONNECTION] Player 2 connected.");

            out1.println("START");
            out2.println("START");

            ship1 = in1.readLine().trim();
            System.out.println("[SHIP PLACED] Player 1 placed ship at: " + ship1);
            ship2 = in2.readLine().trim();
            System.out.println("[SHIP PLACED] Player 2 placed ship at: " + ship2);

            boolean player1Turn = true;
            while (true) {
                if (player1Turn) {
                    out1.println("YOUR_TURN");
                    out2.println("WAIT");

                    String guess = in1.readLine();
                    if (guess == null) break;
                    System.out.println("[ATTACK] Player 1 guessed: " + guess);

                    if (guess.equals(ship2)) {
                        out1.println("HIT_WIN");
                        out2.println("HIT_LOSE:" + guess);
                        break;
                    } else {
                        out1.println("MISS");
                        out2.println("OPPONENT_MISS:" + guess);
                        player1Turn = false;
                    }
                } else {
                    out2.println("YOUR_TURN");
                    out1.println("WAIT");

                    String guess = in2.readLine();
                    if (guess == null) break;
                    System.out.println("[ATTACK] Player 2 guessed: " + guess);

                    if (guess.equals(ship1)) {
                        out2.println("HIT_WIN");
                        out1.println("HIT_LOSE:" + guess);
                        break;
                    } else {
                        out2.println("MISS");
                        out1.println("OPPONENT_MISS:" + guess);
                        player1Turn = true;
                    }
                }
            }
        } catch (IOException e) {
            System.out.println("Server exception: " + e.getMessage());
        } finally {
            try {
                if (player1 != null) player1.close();
                if (player2 != null) player2.close();
                System.out.println("[SERVER CLOSED] Game Over.");
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}