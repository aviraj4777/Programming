public class PrimeNumber {
    static boolean primeOrNot(int x) {
        for (int i = 2; i < x/2; i++) {
            if (x % i == 0)
                return false;
        }
        return true;
    }
    public static void main(String args[]) {
        if (primeOrNot(19))
            System.out.println("Prime Number");
        else
            System.out.println("Not a Prime Number");
    }
}
