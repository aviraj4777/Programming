public class Fibonacci {
    public static void main(String args[]) {
        int a = 0;
        int b = 1;
        int n = 9;
        System.out.print(a + "," + b);
        for (int i = 0; i < n-2; i++) {
            int c = a + b;
            a = b;
            b = c;
            System.out.print("," + c);
        }
    }
}
