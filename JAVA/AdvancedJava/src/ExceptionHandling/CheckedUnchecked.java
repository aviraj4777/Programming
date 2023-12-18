package ExceptionHandling;
class LowBalanceException extends Exception {
    public String toString() {
        return "Balance Should not be less than 5000";
    }
}
public class CheckedUnchecked {
    static void fun1() {
        try {
            System.out.println(10/0);
        }
        catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
    static void fun2(){
        fun1();
    }
    static void fun3() {
        fun2();
    }

    static void checked() {
        try {
            throw new LowBalanceException();
        }
        catch (LowBalanceException e) {
            System.out.println(e);
        }
    }

    public static void main(String[] args) {
        fun3();
        checked();
    }
}
