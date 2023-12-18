package IOStreams;
import java.io.*;

public class RandomAccess {
            public static void main(String[] args) throws Exception {
                RandomAccessFile rf = new RandomAccessFile("D:\\Programing\\JAVA\\Data.txt", "rw");
                //byte b[]={'A','B','C','D','E','F','G''H','I','J'};

                System.out.println((char) rf.read());
                System.out.println((char) rf.read());
                System.out.println((char) rf.read());
                rf.write('d');
                System.out.println((char) rf.read());
                rf.skipBytes(3);
                System.out.println((char) rf.read());
                rf.seek(3);
                System.out.println((char) rf.read());
                System.out.println(rf.getFilePointer());
                rf.seek(rf.getFilePointer() + 2);
                System.out.println((char) rf.read());


            }
}