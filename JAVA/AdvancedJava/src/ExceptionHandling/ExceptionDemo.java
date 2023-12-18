package ExceptionHandling;

import java.util.Scanner;

public class ExceptionDemo {
    public static void main(String[] args) {
        int a = 10, b = 0, c;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers");
        a = sc.nextInt();
        b = sc.nextInt();
        try {
            c = a/b;
            System.out.println("Division is: " + c);
        }
        catch(ArithmeticException e) {
            //System.out.println("Denominator Should not be 0, try again");
            System.out.println(e);
        }
        System.out.println("Bye");
    }
}
