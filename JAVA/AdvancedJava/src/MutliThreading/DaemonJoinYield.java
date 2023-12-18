package MutliThreading;
class MyThread1 extends Thread {
    public void run() {
        int count = 1;
        while(true) {
            System.out.println(count++ + " My Thread");
        }
    }
}
public class DaemonJoinYield {
    public static void main(String[] args) throws Exception {
        MyThread1 t = new MyThread1();
        //t.setDaemon(true);
        t.start();

        //try{Thread.sleep(5);}catch (Exception e){}

//        Thread mainThread = Thread.currentThread();
//        mainThread.join();

        int count = 1;
        while (true) {
            System.out.println(count++ + " Main");
            Thread.yield();
        }
    }
}
