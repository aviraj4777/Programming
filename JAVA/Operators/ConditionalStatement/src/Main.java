import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter three integers");
        int a , b, c;
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();

        if (a > b && b > c) {
            System.out.println(a);
        }
        else {
            if (b > c)
                System.out.println(b);

            else
                System.out.println(c);
        }
    }
}