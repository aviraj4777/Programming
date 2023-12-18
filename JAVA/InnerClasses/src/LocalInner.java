class Outer2 {
    void display() {
        class Inner1 {
            void innerDisplay() {
                System.out.println("Hello");
            }
        }
//        Inner1 i = new Inner1();
//        i.innerDisplay();
        new Inner1().innerDisplay(); //Anonymous Object
    }
}
public class LocalInner {
    public static void main(String[] args) {
        Outer2 ex = new Outer2();
        ex.display();
    }
}
