package MutliThreading;
class SharedData {
    int data;
    boolean writable = true;

    public synchronized void produce(int data) {
        if (writable == false) {
            try {wait();} catch (InterruptedException e) { System.out.println(e); }
        }
        this.data = data;
        System.out.println("Produced : " + data);
        writable = false;
        notify();
    }
    public synchronized int consume() {
        if (writable == true) {
            try {wait();} catch (InterruptedException e) { System.out.println(e); }
        }
        writable = true;
        notify();
        return data;
    }
}

class Producer1 extends Thread {
    SharedData d = new SharedData();

    Producer1(SharedData d) {
        this.d = d;
    }

    public void run() {
        for (int i = 0; i < 10; i++) {
            d.produce(i);
            try {sleep(1000);} catch (InterruptedException e) { System.out.println(e); }
        }
    }
}

class Consumer1 extends Thread {
    SharedData d = new SharedData();

    Consumer1(SharedData dat) {
        d = dat;
    }
    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println("Consumed : " + d.consume());
            try {sleep(1000);} catch (InterruptedException e) { System.out.println(e); }
        }
    }
}
public class ProducerConsumer {
    public static void main(String[] args) {
        SharedData d = new SharedData();

        Producer1 p = new Producer1(d);
        Consumer1 c = new Consumer1(d);

        p.start();
        c.start();
    }
}
