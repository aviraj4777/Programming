package Enum;

enum Dept {
    CS, IT, CIVIL, ECE;

    private Dept() { //constructor of enum must be private
        System.out.println(this.name());
    }
    public void display() {
        System.out.println(this.name() + " " + this.ordinal());
    }
}
public class EnumDemo {
    public static void main(String[] args) {
        Dept d = Dept.CS;
        //System.out.println(d);

//        Dept list[] = Dept.values();
//        for (Dept x: list)
//            System.out.println(x);
        d.display();
        switch (d) {
            case CS:
                System.out.println("HOD: Ajay \nBlock: B4");
                break;
            case IT:
                System.out.println("HOD: Shubham \nBlock: C3");
                break;
            case CIVIL:
                System.out.println("HOD: Sumit \nBlock: D4");
                break;
            case ECE:
                System.out.println("HOD: Piyush \nBlock: A1");
                break;
        }
    }
}
