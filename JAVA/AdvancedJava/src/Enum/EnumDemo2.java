package Enum;
enum Dept1 {
    CS("John","Block A"),IT("Smith","Block B"),CIVIL("Srinivas","Block C"),ECE("Dave","Block D");

    String head;
    String location;

    private Dept1(String head, String loc) { //if we are passing values to each constant of a enum then we have to create a parametrised constructor according to the values
        this.head = head;
        this.location = loc;
    }

    public String getHead() {
        return head;
    }

    public String getLocation() {
        return location;
    }

}
public class EnumDemo2 {
    public static void main(String[] args) {
        Dept1 d = Dept1.CS;
        System.out.println(d.getHead());
        System.out.println(d.getLocation());
    }
}
