package IOStreams;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.FileOutputStream;
import java.nio.ByteOrder;

public class ByteArray {
    public static void main(String[] args) throws Exception {
        byte b[] = {'a','b','c','d','e','f','g','h','i','j'};

        ByteArrayInputStream bis = new ByteArrayInputStream(b);
        /*
        int x;
        while((x = bis.read()) != -1) {
            System.out.print((char)x);
        }

         */
        String str = new String(bis.readAllBytes());
        System.out.println(str);
        System.out.println(bis.markSupported());

        bis.close();

        ByteArrayOutputStream bos = new ByteArrayOutputStream(20);
        bos.write('a');
        bos.write('b');
        bos.write('c');
        bos.write('d');

        byte bo[] = bos.toByteArray();

        for(byte x:bo)
            System.out.println((char)x);

        bos.writeTo(new FileOutputStream("D:\\Programing\\JAVA\\Demo.txt"));

        bos.close();
    }
}
