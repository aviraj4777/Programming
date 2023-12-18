public class GCD {
    static int GCD (int x, int y) {
        while (x!=y) {
            if (x > y) {
                x = x-y;
            }
            else
                y = y-x;
        }
        return x;
    }
    public static void main (String args[]) {
        System.out.println(GCD(225,15));
    }
}
