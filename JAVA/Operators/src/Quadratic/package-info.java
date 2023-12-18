package Quadratic;

import java.lang.*;
import java.util.*;

class QuadraticEquation {
    public static void main (String args[]) {
        int a, b, c;
        double determinant;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of a, b and c");
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();

        determinant = Math.sqrt( b * b - 4 * a * c);

        double root1, root2;
        root1 = (-b + determinant) / (2 * a);
        root2 = (-b - determinant) / (2 * a);

        System.out.println("Root1 = " + root1 + "\nRoot2 = " + root2);
    }
}