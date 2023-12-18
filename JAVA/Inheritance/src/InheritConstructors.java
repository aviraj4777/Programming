 class Parent {
        public Parent() {
            System.out.println("Parent Constructor");
        }
        public Parent(int x){
            System.out.println("Parametrised of Parent " + x);
        }
    }
    class Child extends Parent {
        public Child() {
            System.out.println("Child Constructor");
        }
        public Child(int y) {
            System.out.println("Parametrised of Child " + y);
        }
        public Child(int x, int y) {
            super(x);
            System.out.println("2 Parametrise of Child " + y);
        }
    }
 public class InheritConstructors {
     public static void main(String[] args) {
         Child c = new Child(5);
         Child c1 = new Child(2,3);
     }
 }
