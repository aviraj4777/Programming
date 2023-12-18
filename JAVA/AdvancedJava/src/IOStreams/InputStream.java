package IOStreams;

import java.io.FileInputStream;
import java.io.FileReader;

public class InputStream {
    public static void main(String[] args) throws Exception {
        /*try (FileInputStream fis = new FileInputStream("D:\\Programing\\JAVA\\Test.txt")) {
            byte b[] = new byte[fis.available()];

            fis.read(b);
            String str = new String(b);

            System.out.println(str);*/
        try (FileReader fr = new FileReader("D:\\Programing\\JAVA\\Test.txt")) {
            int x;
            while((x=fr.read())!=-1) {
                System.out.print((char)x);
            }
        }
    }
}
