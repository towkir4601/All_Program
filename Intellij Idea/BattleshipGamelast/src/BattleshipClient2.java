import java.io.*;
import java.net.*;
import java.util.*;

public class BattleshipClient2 { // ক্লাসের নাম পরিবর্তন করা হয়েছে
    private static final String SERVER_IP = "127.0.0.1";
    private static final int PORT = 5555;
    private static Map<String, String> myGuesses = new HashMap<>();

    public static void main(String[] args) {
        try (Socket socket = new Socket(SERVER_IP, PORT);
             PrintWriter out = new PrintWriter(socket.getOutputStream(), true);
             BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
             Scanner scanner = new Scanner(System.in)) {

            System.out.println(in.readLine());

            String startSignal = in.readLine();
            if (startSignal.equals("START")) {
                System.out.println("\nBoth players connected! Game is starting...");
            }

            String myShipPos = "";
            while (true) {
                System.out.println("\nPlace your Battleship on a 5x5 grid (Row and Col between 0-4)");
                System.out.print("Enter Row (0-4): ");
                int r = scanner.nextInt();
                System.out.print("Enter Col (0-4): ");
                int c = scanner.nextInt();

                if (r >= 0 && r <= 4 && c >= 0 && c <= 4) {
                    myShipPos = r + "," + c;
                    out.println(myShipPos);
                    break;
                }
                System.out.println("Invalid input! Stay within 0-4.");
            }
            System.out.println("Ship placed. Waiting for opponent...");

            while (true) {
                String status = in.readLine();
                if (status == null) break;

                if (status.equals("YOUR_TURN")) {
                    printBoard();
                    System.out.println("It's your turn to attack!");
                    String guess_pos = "";

                    while (true) {
                        System.out.print("Enter Attack Row (0-4): ");
                        int gr = scanner.nextInt();
                        System.out.print("Enter Attack Col (0-4): ");
                        int gc = scanner.nextInt();

                        if (gr >= 0 && gr <= 4 && gc >= 0 && gc <= 4) {
                            guess_pos = gr + "," + gc;
                            out.println(guess_pos);
                            break;
                        }
                        System.out.println("Invalid coordinates.");
                    }

                    String result = in.readLine();
                    if (result.equals("HIT_WIN")) {
                        myGuesses.put(guess_pos, "X");
                        printBoard();
                        System.out.println("💥 HIT! You sank the enemy's battleship! YOU WIN! 🎉");
                        break;
                    } else if (result.equals("MISS")) {
                        myGuesses.put(guess_pos, "O");
                        System.out.println("💦 MISS! No ship there.");
                    }

                } else if (status.equals("WAIT")) {
                    System.out.println("Waiting for opponent's move...");

                } else if (status.startsWith("HIT_LOSE")) {
                    String pos = status.split(":")[1];
                    System.out.println("\n💥 BOOM! Opponent hit your ship at " + pos + "! YOU LOSE! 💀");
                    break;

                } else if (status.startsWith("OPPONENT_MISS")) {
                    String pos = status.split(":")[1];
                    System.out.println("\n💨 Opponent attacked " + pos + " and MISSED! Your turn now.");
                }
            }

        } catch (IOException e) {
            System.out.println("Connection error: " + e.getMessage());
        }
    }

    private static void printBoard() {
        System.out.println("\n--- YOUR ATTACK BOARD ---");
        System.out.println("  0 1 2 3 4");
        for (int r = 0; r < 5; r++) {
            StringBuilder rowStr = new StringBuilder(r + " ");
            for (int c = 0; c < 5; c++) {
                String pos = r + "," + c;
                if (myGuesses.containsKey(pos)) {
                    rowStr.append(myGuesses.get(pos)).append(" ");
                } else {
                    rowStr.append(". ");
                }
            }
            System.out.println(rowStr.toString());
        }
        System.out.println("-------------------------\n");
    }
}