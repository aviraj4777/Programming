import java.util.*;
import java.io.*;
public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no. for table:");
        int input = sc.nextInt();
        sc.close();

        System.out.println("\nUsing for loop");
        for (int i = 1; i <= 10; i++) {
            System.out.println(input + " x " + i + " = " + input * i);
        }

        System.out.println("\nUsing while loop");
        int i = 1;
        while (i <= 10) {
            System.out.println(input + " x " + i + " = " + input * i);
            i++;
        }

        System.out.println("\nUsing do-while loop");
        i = 1;
        do {
            System.out.println(input + " x " + i + " = " + input * i);
            i++;
        } while (i <= 10);
    }
}