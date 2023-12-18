package Cuboid;
import java.util.*;
public class Main {
    public static void main (String args[]) {
        int length, breadth, height;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length, breadth and height of cuboid");
        length = sc.nextInt();
        breadth = sc.nextInt();
        height = sc.nextInt();

        int totalArea = 2 * (length * breadth + breadth * height + height * length);
        int volume = length * breadth * height;

        System.out.println("Total Area is " + totalArea + "\nVolume is " + volume);
    }
}
