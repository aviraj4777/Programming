import java.sql.SQLOutput;
import java.util.Scanner;

public class LeapYear {
    public static void main (String args[]) {
        Scanner sc = new Scanner(System.in);
        int num;
        System.out.println("Enter a year");
        num = sc.nextInt();

        if (num % 4 == 0) {
            if (num % 100 == 0) {
                if (num % 400 == 0)
                    System.out.println("Leap Year");
                else
                    System.out.println("Not a Leap Year");
            }
            else
                System.out.println("Its a leap year");
        }

        else
            System.out.println("Not a Leap Year");

    }
}
