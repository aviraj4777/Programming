package MutliThreading;
class MyData {
    synchronized void display(String str) {
        for (int i = 0; i < str.length(); i++) {
            System.out.print(str.charAt(i));
            try{Thread.sleep(10);}catch(Exception e) {}
        }
        System.out.print(" ");
    }
}
class MyThread3 extends Thread {
    MyData d;
    MyThread3 (MyData dat) {
        d = dat;
    }
    public void run() {
        d.display("Hello World");
    }
}

class MyThread4 extends Thread {
    MyData data;
    MyThread4(MyData dat){
        data = dat;
    }
    public void run() {
        data.display("Welcome");
    }
}
public class SynchronizationTest {
    public static void main(String[] args) {
        MyData d = new MyData();
        MyThread3 t1 = new MyThread3(d);
        MyThread4 t2 = new MyThread4(d);
        t1.start();
        t2.start();
    }
}
