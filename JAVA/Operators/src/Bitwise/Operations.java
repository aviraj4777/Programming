package Bitwise;

public class Operations {
    public static void main (String args[]) {
        int a = 9;
        int b = 12;
        System.out.println("The value of A and B before swapping is " + a + " " + b);
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;

        System.out.println("The value of A and B after swapping is " + a + " " + b);
    }
}
