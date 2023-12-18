package Area;
import java.lang.*;
import java.util.Scanner;

class Area {
    public static void main (String args[]) {
        float base, height, area;
        System.out.println("Enter Base and Height");
        Scanner sc = new Scanner(System.in);

        base = sc. nextFloat();
        height = sc.nextFloat();

        area = base * height * 0.5f;

        System.out.println("Area of triangle is " + area);

        int a, b, c;
        float s;
        double area1;
        System.out.println("Enter the value of a , b and c ");
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        s = (a + b + c) / 2f;
        float temp = s * (s-a) * (s-b) * (s-c);
        area1 = Math.sqrt(temp);
        System.out.println(area1);
    }
}