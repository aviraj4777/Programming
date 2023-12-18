package IOStreams;
import java.io.*;
public class CharArray {
    public static void main(String[] args) throws Exception{
        char c[]={'a','b','c','d','e','f','g','h','i','j'};

        CharArrayReader cr=new CharArrayReader(c);

        /*
        int x;

        while((x=cr.read())!=-1)
        {
            System.out.print((char)x);

        }

         */
        int x;
        CharArrayWriter cw = new CharArrayWriter();
        while((x=cr.read())!=-1)
        {
            cw.append((char)x);
        }

        String str = cw.toString();

        System.out.println(str);
        cr.close();
    }
}
