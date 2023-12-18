package Bitwise;

public class MaskingAndMerging {
    public static void main (String args[]) {
        byte c;
        c = (byte)(9<<4);
        c = (byte)(c|12);

        System.out.println((c&0b11110000)>>4);
        System.out.println((c&0b00001111));
    }
}
