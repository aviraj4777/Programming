import java.util.Scanner;

public class WebsiteType {
    public static void main (String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a URL");
        String url = sc.nextLine();

        String protocol = url.substring(0,url.indexOf(":"));

        String ext = url.substring(url.lastIndexOf(".")+1);

        if (protocol.equals("http"))
            System.out.println("Hyper Text Transfer Protocol");
        else if (protocol.equals("ftp"))
            System.out.println("File Transfer Protocol");


        if (ext.equals("com"))
            System.out.println("Commercial");

        else if (ext.equals("org"))
            System.out.println("Organization");

        else if (ext.equals("net"))
            System.out.println("Network");


    }
}
