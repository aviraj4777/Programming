public class Main {
    public static void main(String[] args) {

        circle c1 = new circle();
        c1.radius = 7;
        System.out.println(c1.area());
        System.out.println(c1.perimeter());
        System.out.println(c1.circumference());

        Rectangle r1 = new Rectangle();
        r1.length = 10;
        r1.breadth = 5;
        System.out.println(r1.area());
        System.out.println(r1.perimeter());
        System.out.println(r1.isSquare());

        Cylinder cy1 = new Cylinder();
        cy1.radius=7;
        cy1.height=10;
        System.out.format("%.2f",cy1.lidArea());
        System.out.println("");
        System.out.println(cy1.totalSurfaceArea());
        System.out.println(cy1.volume());

        Student s=new Student();
        s.roll=1;
        s.name="John";
        s.course="CS";
        s.m1=70;
        s.m2=80;
        s.m3=65;
        System.out.println("Total :"+s.total());
        System.out.println("Average :"+s.average());
        System.out.println("Details: \n"+ s );
    }
}