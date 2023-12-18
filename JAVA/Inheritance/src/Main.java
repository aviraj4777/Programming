class Rectangle {
    public int length;
    public int breadth;
    int x = 10;

    Rectangle() {
        length = breadth = 1;
    }
    Rectangle(int length, int breadth) {
        this.length = length;
        this.breadth = breadth;
    }
}
class Cuboid extends Rectangle {
    int height;
    int x = 20;
    Cuboid() {
        height = 1;
    }
    Cuboid(int height) {
        this.height = height;
    }
    Cuboid(int l, int b, int height) {
        super(l, b);
        this.height=height;
    }
    int volume() {
        return length*breadth*height;
    }
    void display() {
        System.out.println(super.x);
        System.out.println(x);
    }
}
public class Main {
    public static void main(String[] args) {
        Cuboid c = new Cuboid(5,3,10);
        System.out.println(c.volume());
        c.display();
    }
}