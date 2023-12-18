package MutliThreading;
class MyRunnable implements Runnable {
    public void run() {
        int i = 1;
        while(true)
        {
            System.out.println(i+" Hello");
            i++;
        }
    }
}

public class RunnableInterface implements Runnable{
    public void run() {
        int i = 1;
        while(true)
        {
            System.out.println(i+" Hello");
            i++;
        }
    }

    public static void main(String[] args) {
        //RunnableInterface r = new RunnableInterface();
        MyRunnable mr = new MyRunnable();
        Thread t = new Thread(mr);

        t.start();
        int i = 1;
        while (true){
            System.out.println(i+" World");
            i++;
        }
    }
}
