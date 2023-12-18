package IOStreams;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.SequenceInputStream;

public class CopyingFiles {
    public static void main(String[] args) throws Exception {
        FileOutputStream fis = new FileOutputStream("D:\\Programing\\JAVA\\source2.txt");
        try (FileReader fr = new FileReader("D:\\Programing\\JAVA\\source1.txt")) {
            int x;
            while ((x=fr.read())!=-1) {
                if (x >= 65 && x <= 90) {
                    x = x + 32;
                }
                fis.write(x);
            }
        }
        fis.close();


        FileInputStream s1 = new FileInputStream("D:\\Programing\\JAVA\\source1.txt");
        FileInputStream s2 = new FileInputStream("D:\\Programing\\JAVA\\source2.txt");

        FileOutputStream fos = new FileOutputStream("D:\\Programing\\JAVA\\Destination.txt");

        /*
        int b;
        while((b = s1.read()) != -1) {
            fos.write((char)b);
        }

        while((b = s2.read()) != -1) {
            fos.write((char)b);
        }
        */
        SequenceInputStream sis = new SequenceInputStream(s1,s2);

        int b;
        while((b=sis.read())!=-1) {
            fos.write(b);
        }

        sis.close();
        s1.close();
        s2.close();
        fos.close();
    }
}
