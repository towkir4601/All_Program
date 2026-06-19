import java.util.Scanner;

public class practice{
    private double a;
    private double b;
    public practice(double x, double y){
        a = x;
        b = y;
    }
    public practice(double r){
        a = r;
        b = r;
    }
    void disply(){
        System.out.println("a="+a);
        System.out.println("b="+b);
    }
    public static void main(String[] args) {
        practice obj = new practice(5);
        practice obj2 = new practice(5, 7);
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            obj.disply();
            obj2.disply();
        }
    }
}