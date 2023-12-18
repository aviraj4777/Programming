package MutliThreading;
/*
class MyRun implements Runnable {
    public void run(){};
}
 */
class MyThread extends Thread {
    public MyThread(String name) {
        super(name);
        setPriority(Thread.MAX_PRIORITY);
        setPriority(Thread.MIN_PRIORITY);
    }
    public void run() {
        int i = 1;
        while(true)
        {
            System.out.println(i++);
            try {
                Thread.sleep(100);
            }
            catch (InterruptedException e)
            {
                System.out.println(e);
            }
        }
    }
}
public class SleepAndInterrupt {
    public static void main(String[] args) {
        //Thread t = new Thread(new MyRun(), "My Name");
        MyThread t = new MyThread("My Thread 1");
        t.start();
        t.interrupt();

//        System.out.println("ID "+t.getId());
//        System.out.println("Name "+t.getName());
//        System.out.println("Priority "+t.getPriority());
//        t.start();
//        System.out.println("State "+t.getState());
//        System.out.println("Alive "+t.isAlive());
    }
}
