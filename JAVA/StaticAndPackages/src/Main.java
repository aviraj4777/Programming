class Test {
    static int x = 10;
    int y = 20;

    void show() {
        System.out.println(x+" "+y);
    }
    static void display() {
        System.out.println(x);
        //System.out.println(y);
    }
}
public class Main {
    public static void main(String[] args) {

        //System.out.println("Hello world!");
        Test t1 = new Test();
        t1.show();

        t1.x = 30;
        t1.y = 50;
        //y ka value sirf t1 object ke liye change hua hai
        // jabki x ek static variable to ek baar agar
        // uska value change ho gya to wo saare object ke liye same hoga
        Test t2 = new Test();
        t2.show();
    }

}