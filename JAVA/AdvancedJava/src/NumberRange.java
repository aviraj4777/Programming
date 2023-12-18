import java.util.Scanner;

public class NumberRange {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        System.out.println("The range of numbers from 0 to " + number + " is:");
        printRange(number);
    }

    public static void printRange(int number) {
        for (int i = 0; i < number; i++) {
            System.out.print(i + " ");
        }
    }
}
