import java.util.Scanner;

public class hello {
    public static void main(String[] args) {
        System.out.print("Enter your age : ");
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();
        if (age >= 18) {
            System.out.println("Can Vote");
        }else{
            System.out.println("Can't Vote");
        }


    }
}
