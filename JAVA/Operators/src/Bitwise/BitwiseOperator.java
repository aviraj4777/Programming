package Bitwise;

public class BitwiseOperator {
    public static void main (String args[]) {
        int a = 0b1010;
        int b = 0b0110;
        int z;
        z = a^b;

        System.out.println("The XOR of a and b is :" + z);

        int x = -0b1010;
        int y = x>>>1; // ">>>" -> Unsigned right shift operator

        /*  right shift operator divides the decimal number by 2 and left shift operator multiply the decimal
            number by 2

            Unlike unsigned Right Shift, there is no “<<<” operator in Java
            because the logical (<<) and arithmetic left-shift (<<<) operations are identical.

            To get a decimal number from negative binary number we need to perform 2S complement.
         */

        System.out.println(String.format("%s",Integer.toBinaryString(x)));
        System.out.println(String.format("%32s",Integer.toBinaryString(y)));
    }
}
