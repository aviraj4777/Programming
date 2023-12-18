class Outer3 {
    int x = 10;;
    static int y = 20;

    static class My {
        public void show() {
            System.out.println(y);
        }
    }
}
public class StaticInner {
    public static void main(String[] args) {
        Outer3.My m1 = new Outer3.My();
        m1.show();
    }
}
