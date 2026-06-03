package com.example.battleship;

import javafx.animation.AnimationTimer;
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.canvas.Canvas;
import javafx.scene.canvas.GraphicsContext;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Random;

public class PremiumBattleship extends Application {

    private static final int GRID_SIZE = 10;
    private static final int CELL_SIZE = 45;
    private static final int CANVAS_WIDTH = 800;
    private static final int CANVAS_HEIGHT = 600;

    private int[][] grid = new int[GRID_SIZE][GRID_SIZE];
    private List<Particle> particles = new ArrayList<>();
    private List<Projectile> projectiles = new ArrayList<>();
    private Random random = new Random();

    @Override
    public void start(Stage primaryStage) {
        Canvas canvas = new Canvas(CANVAS_WIDTH, CANVAS_HEIGHT);
        GraphicsContext gc = canvas.getGraphicsContext2D();

        initShips();

        canvas.setOnMouseClicked(e -> {
            double mouseX = e.getX();
            double mouseY = e.getY();

            int gridStartX = 100;
            int gridStartY = 100;

            if (mouseX >= gridStartX && mouseX < gridStartX + GRID_SIZE * CELL_SIZE &&
                    mouseY >= gridStartY && mouseY < gridStartY + GRID_SIZE * CELL_SIZE) {

                int col = (int) ((mouseX - gridStartX) / CELL_SIZE);
                int row = (int) ((mouseY - gridStartY) / CELL_SIZE);

                double startX = CANVAS_WIDTH / 2.0;
                double startY = CANVAS_HEIGHT - 20;
                double targetX = gridStartX + col * CELL_SIZE + CELL_SIZE / 2.0;
                double targetY = gridStartY + row * CELL_SIZE + CELL_SIZE / 2.0;

                projectiles.add(new Projectile(startX, startY, targetX, targetY, row, col));
            }
        });

        new AnimationTimer() {
            @Override
            public void handle(long now) {
                updatePhysics();
                render(gc);
            }
        }.start();

        StackPane root = new StackPane(canvas);
        Scene scene = new Scene(root, CANVAS_WIDTH, CANVAS_HEIGHT, Color.valueOf("#0d1117"));

        primaryStage.setTitle("⚡ Premium Battleship: Tactical Strike ⚡");
        primaryStage.setScene(scene);
        primaryStage.setResizable(false);
        primaryStage.show();
    }

    private void initShips() {
        for (int i = 0; i < 5; i++) {
            int r = random.nextInt(GRID_SIZE);
            int c = random.nextInt(GRID_SIZE);
            grid[r][c] = 1;
        }
    }

    private void updatePhysics() {
        Iterator<Projectile> pIterator = projectiles.iterator();
        while (pIterator.hasNext()) {
            Projectile p = pIterator.next();
            p.update();
            if (p.isExploded()) {
                if (grid[p.targetRow][p.targetCol] == 1) {
                    grid[p.targetRow][p.targetCol] = 2;
                    createExplosion(p.x, p.y, Color.ORANGERED);
                } else if (grid[p.targetRow][p.targetCol] == 0) {
                    grid[p.targetRow][p.targetCol] = 3;
                    createExplosion(p.x, p.y, Color.AQUA);
                }
                pIterator.remove();
            }
        }

        Iterator<Particle> particleIterator = particles.iterator();
        while (particleIterator.hasNext()) {
            Particle particle = particleIterator.next();
            particle.update();
            if (particle.alpha <= 0) {
                particleIterator.remove();
            }
        }
    }

    private void createExplosion(double x, double y, Color color) {
        int particleCount = color == Color.ORANGERED ? 30 : 15;
        for (int i = 0; i < particleCount; i++) {
            particles.add(new Particle(x, y, color));
        }
    }

    private void render(GraphicsContext gc) {
        gc.setFill(Color.valueOf("#0d1117"));
        gc.fillRect(0, 0, CANVAS_WIDTH, CANVAS_HEIGHT);

        gc.setFill(Color.CYAN);
        gc.setFont(new javafx.scene.text.Font("Impact", 32));
        gc.fillText("BATTLESHIP: NAVAL WARFARE", 220, 60);

        int gridStartX = 100;
        int gridStartY = 100;

        for (int row = 0; row < GRID_SIZE; row++) {
            for (int col = 0; col < GRID_SIZE; col++) {
                double x = gridStartX + col * CELL_SIZE;
                double y = gridStartY + row * CELL_SIZE;

                gc.setStroke(Color.valueOf("#1f2937"));
                gc.setLineWidth(1.5);
                gc.strokeRect(x, y, CELL_SIZE, CELL_SIZE);

                if (grid[row][col] == 2) {
                    gc.setFill(Color.rgb(255, 69, 0, 0.3));
                    gc.fillRect(x + 2, y + 2, CELL_SIZE - 4, CELL_SIZE - 4);
                    gc.setFill(Color.ORANGERED);
                    gc.fillOval(x + CELL_SIZE/4.0, y + CELL_SIZE/4.0, CELL_SIZE/2.0, CELL_SIZE/2.0);
                } else if (grid[row][col] == 3) {
                    gc.setFill(Color.rgb(0, 191, 255, 0.2));
                    gc.fillRect(x + 2, y + 2, CELL_SIZE - 4, CELL_SIZE - 4);
                    gc.setFill(Color.DEEPSKYBLUE);
                    gc.fillOval(x + CELL_SIZE/3.0, y + CELL_SIZE/3.0, CELL_SIZE/3.0, CELL_SIZE/3.0);
                } else {
                    gc.setFill(Color.rgb(20, 30, 50, 0.5));
                    gc.fillRect(x + 2, y + 2, CELL_SIZE - 4, CELL_SIZE - 4);
                }
            }
        }

        for (Projectile p : projectiles) {
            gc.setFill(Color.GOLD);
            gc.fillOval(p.x - 5, p.y - 5, 10, 10);

            gc.setFill(Color.rgb(255, 215, 0, 0.3));
            gc.fillOval(p.x - 3, p.y - 3, 6, 6);
        }

        for (Particle p : particles) {
            gc.setFill(Color.rgb((int)(p.color.getRed()*255), (int)(p.color.getGreen()*255), (int)(p.color.getBlue()*255), p.alpha));
            gc.fillOval(p.x, p.y, p.size, p.size);
        }
    }

    public static void main(String[] args) {
        launch(args);
    }

    private class Projectile {
        double x, y;
        double startX, startY;
        double targetX, targetY;
        double t = 0;
        int targetRow, targetCol;

        public Projectile(double startX, double startY, double targetX, double targetY, int r, int c) {
            this.x = startX;
            this.y = startY;
            this.startX = startX;
            this.startY = startY;
            this.targetX = targetX;
            this.targetY = targetY;
            this.targetRow = r;
            this.targetCol = c;
        }

        public void update() {
            t += 0.025;
            if (t > 1) t = 1;

            x = startX + (targetX - startX) * t;

            double linearY = startY + (targetY - startY) * t;
            double height = 150;
            double arc = height * 4 * t * (1 - t);
            y = linearY - arc;
        }

        public boolean isExploded() {
            return t >= 1;
        }
    }

    private class Particle {
        double x, y;
        double vx, vy;
        double alpha = 1.0;
        double size;
        Color color;

        public Particle(double x, double y, Color color) {
            this.x = x;
            this.y = y;
            this.color = color;
            this.size = random.nextDouble() * 5 + 2;

            double angle = random.nextDouble() * Math.PI * 2;
            double speed = random.nextDouble() * 4 + 1;
            this.vx = Math.cos(angle) * speed;
            this.vy = Math.sin(angle) * speed;
        }

        public void update() {
            x += vx;
            y += vy;
            vy += 0.1;
            alpha -= 0.02;
            if (alpha < 0) alpha = 0;
        }
    }
}