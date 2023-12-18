package IOStreams;

import java.io.BufferedInputStream;
import java.io.FileInputStream;

public class BufferDemo {
    public static void main(String[] args) throws Exception{
        FileInputStream fis = new FileInputStream("D:\\Programing\\JAVA\\Test.txt");
        BufferedInputStream bis = new BufferedInputStream(fis);
        //System.out.println(fis.markSupported());
        //System.out.println(bis.markSupported());

        System.out.println((char)bis.read());
        System.out.println((char)bis.read());
        System.out.println((char)bis.read());
        bis.mark(4);
        System.out.println((char)bis.read());
        System.out.println((char)bis.read());
        bis.reset();

        System.out.println((char)bis.read());
        System.out.println((char)bis.read());

        //System.out.println("String "+ bis.readLine());
        //readLine method is available with BufferedReader class hence to use
        //readLine method you should must transform the BufferedInputStream to BufferReader
    }
}
