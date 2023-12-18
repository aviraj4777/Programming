abstract class Shape {
    abstract double perimeter();
    abstract double area();
}
class Circle extends Shape {
    int radius;
    Circle (int radius) {
        this.radius = radius;
    }
    double perimeter() {
        return 2 * Math.PI * radius;
    }
    double area() {
        return Math.PI * radius * radius;
    }
}
class Rectangle extends Shape {
    int length;
    int breadth;

    Rectangle(int length, int breadth) {
        this.length = length;
        this.breadth = breadth;
    }
    double area() {
        return length * breadth;
    }
    double perimeter() {
        return 2 * (length + breadth);
    }
}

public class AbstractChallnege {
    public static void main(String[] args) {
        Shape s1 = new Circle(7);
        System.out.println(s1.area());
        System.out.println(s1.perimeter());

        Shape s2 = new Rectangle(5,5);
        System.out.println(s2.area());
        System.out.println(s2.perimeter());
    }
}
