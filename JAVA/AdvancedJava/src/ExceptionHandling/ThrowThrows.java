package ExceptionHandling;
class NegativeDimensionException extends Exception {
    @Override
    public String toString() {
        return "Dimension cannot be negative";
    }
}
public class ThrowThrows {
    static int area(int l, int b) throws NegativeDimensionException {
        if(l < 0 || b < 0)
            throw new NegativeDimensionException();

        int a = l * b;
        return a;
    }
    static void meth1() throws NegativeDimensionException {
        System.out.println("Area is " + area(-10,5));

    }

    public static void main(String[] args) throws NegativeDimensionException{
        try {
            meth1();
        }
        catch (NegativeDimensionException e) {
            System.out.println(e);
        }
    }
}
