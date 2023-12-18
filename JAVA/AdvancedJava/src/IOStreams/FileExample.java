package IOStreams;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class FileExample {
    public static void main(String[] args) {
        try
        {
            FileOutputStream fos = new FileOutputStream("D:\\Programing\\JAVA\\Test.txt");
            String str = "Learn Java Programming";

            byte b[] = str.getBytes();

            //for(byte x: b)
            //    fos.write(x);

            //fos.write(b, 6,str.length() - 6);

            fos.write(b);

            //fos.write(str.getBytes());
            fos.close();
        }
        catch(FileNotFoundException e) {
            System.out.println(e);
        }
        catch (IOException e) {
            System.out.println(e);
        }
    }
}
