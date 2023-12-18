package WrapperClasses;

class MyObject {
//    public String toString() {
//        return "My Object";
//    }
    public int hashCode() {
        return 100;
    }
    public boolean equals(Object o) {
        return this.hashCode()==o.hashCode();
    }
    //public void notify() {

    //}
}
public class Object {
    public static void main(String[] args) {
        MyObject m = new MyObject();
        MyObject n = new MyObject();
        System.out.println(m);
        System.out.println(m.equals(n));
    }
}
