import java.util.*;

class Student{}
class Rockstar{   }
class Hacker{ }


    public static void Main(String []args){
        System.out.println("Aditya Singh \nUID: 21BCS11122 \nSection: 805-B");
        ArrayList mylist = new ArrayList();
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0; i<t; i++){
            String s=sc.next();
            if(s.equals("Student"))mylist.add(new Student());
            if(s.equals("Rockstar"))mylist.add(new Rockstar());
            if(s.equals("Hacker"))mylist.add(new Hacker());
        }
        System.out.println(count(mylist));
    }
}
