//interface My {
//    void display();
//}
abstract class My {
    abstract void display();
}
class Outer1 {
    public void meth() {
        int i=0;
        My m = new My() {
            public void display() {
                System.out.println("Hello" + i);
            }
        };
        m.display();
    }
}
public class Anonymous {
    public static void main(String[] args) {
        Outer1 obj = new Outer1();
        obj.meth();
    }
}
