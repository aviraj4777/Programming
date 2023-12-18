import org.w3c.dom.ls.LSOutput;

import java.util.Date;

class Student {
    private String rollNo;
    private static int count = 1;
    private String generateRollNO() {
        Date d = new Date();
        String rn = "Univ-" + (d.getYear()+1900) + "-" + count;
        count++;
        return rn;
    }
    public Student() {
        rollNo = generateRollNO();
    }
    public String getRollNo() {
        return rollNo;
    }
}
public class StudentRollNo {
    static public void main(String[] args) {

        Student s1 = new Student();
        Student s2 = new Student();
        Student s3 = new Student();

        System.out.println(s1.getRollNo());
        System.out.println(s2.getRollNo());
        System.out.println(s3.getRollNo());
    }
}
