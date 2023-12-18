public class Main {
    static int max(int x, int y)
    {
        if(x > y)
            return x;

        else
            return y;
    }

    static void inc(int x) {
        x++;
        System.out.println(x);
    }

    public static void main(String[] args) {

        int a = 10, b = 15;
        System.out.println(max(a,b)); //we have to make max static method to call it from main
        Main m = new Main();
        System.out.println(Main.max(a,b));

        inc(a);
        System.out.println(a);
    }
}