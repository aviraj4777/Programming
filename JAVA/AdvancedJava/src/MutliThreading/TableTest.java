package MutliThreading;
class Table {
    public synchronized void display(int a) {
        for (int i = 1; i <= 10; i ++) {
            System.out.println(a * i);
        }
    }
}

class DemoThread1 extends Thread {
    Table t = new Table();

    DemoThread1(Table t) {
        this.t = t;
    }

    @Override
    public void run() {
        t.display(5);
    }
}

class DemoThread2 extends Thread {
    Table t = new Table();

    DemoThread2(Table t) {
        this.t = t;
    }

    @Override
    public void run() {
        t.display(6);
    }
}

public class TableTest {
    public static void main(String[] args) {
        Table t1 = new Table();
        //agar table ka same object pass nhii krenge to dono thread apna table ka object bna lega aur dono alag alag object ko point krne lgega aur usse
        //lock nhii lag paayega object pr jiske karan dono thread individually execute hone lgega
        DemoThread1 d1 = new DemoThread1(t1);
        DemoThread2 d2 = new DemoThread2(t1);

        d1.start();
        d2.start();
    }
}
