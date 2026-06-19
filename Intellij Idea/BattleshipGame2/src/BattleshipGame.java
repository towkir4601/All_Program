
import javax.swing.*;
import java.awt.*;
import java.util.Random;

public class BattleshipGame extends JFrame {

    private JButton[][] grid = new JButton[8][8];
    private boolean[][] ships = new boolean[8][8];
    private int shipsLeft = 10;

    public BattleshipGame() {
        setTitle("Battleship Game");
        setSize(700, 700);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(new GridLayout(8, 8));

        placeShips();

        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {

                JButton btn = new JButton();
                btn.setBackground(Color.CYAN);

                int r = row;
                int c = col;

                btn.addActionListener(e -> {

                    if (!btn.isEnabled())
                        return;

                    if (ships[r][c]) {
                        btn.setBackground(Color.RED);
                        btn.setText("X");
                        shipsLeft--;

                        if (shipsLeft == 0) {
                            JOptionPane.showMessageDialog(
                                    this,
                                    "Congratulations! You sank all ships!");
                        }

                    } else {
                        btn.setBackground(Color.WHITE);
                        btn.setText("~");
                    }

                    btn.setEnabled(false);
                });

                grid[row][col] = btn;
                add(btn);
            }
        }
    }

    private void placeShips() {
        Random random = new Random();
        int count = 0;

        while (count < 10) {
            int r = random.nextInt(8);
            int c = random.nextInt(8);

            if (!ships[r][c]) {
                ships[r][c] = true;
                count++;
            }
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            BattleshipGame game = new BattleshipGame();
            game.setVisible(true);
        });
    }
}

