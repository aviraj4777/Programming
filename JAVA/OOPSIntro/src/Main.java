public class Main {
    public static void main(String[] args) {
        Human chitti = new Human();
        System.out.println("Wapas aa gya constructor se");
        chitti.age = 23;
        chitti.weight = 70;
        chitti.sleep();

        System.out.println("Age of chitti is " + chitti.age);
        Human obj = new Human(12, 29);
        System.out.println("age of obj is " + obj.age);

        //System.out.println("Number of object created from Human class is " + Human.count);
    }
}
class Human {
    int age;
    int weight;

    //No-arg constructor
    public Human() {
        age = 0;
        System.out.println("Inside the constructor - Creating Class");
    }

    //Parametrized constructor
    public Human (int age, int weight) {
        this.age = age;
        this.weight = weight;
    }

    //Behaviour/class methods
    void sleep() {
        System.out.println("Human is sleeping");
    }

    void eat() {
        System.out.println("Human is eating");
    }

}