package MutliThreading;

class ATM {
    public void checkBalance(String name) {
        System.out.println(name + " is checking balance.");
        try{Thread.sleep(10);}catch(Exception e) {}
    }
    public void withdrawAmount(String name, int amt) {
        System.out.println(name + " is withdrawing " + amt);
        try{Thread.sleep(10);}catch(Exception e) {}
    }
}
class Customer extends Thread {
    ATM atm;
    String name;
    int amount;

    Customer(String name, int amount, ATM a) {
        this.name = name;
        this.amount = amount;
        atm = a;
    }
    public void useATM() {
        synchronized (atm) {
            atm.checkBalance(name);
            atm.withdrawAmount(name, amount);
        }
    }

    public void run() {
        useATM();
    }
}
public class ATMTest {
    public static void main(String[] args) {
        ATM atm = new ATM();
        Customer c1 = new Customer("Piyush", 1000, atm);
        Customer c2 = new Customer("Ajay", 200, atm);
        Customer c3 = new Customer("Sumit", 500, atm);
        c1.start();
        c2.start();
        c3.start();
    }
}
