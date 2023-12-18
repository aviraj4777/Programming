public class StringObject {
    public static void main (String args[]) {
        String str1 = "Java Program";
        String str2 = new String("JAVA");
        char c[] = {'H','e','l','l','o'};
        String str3 = new String(c,1,2);
        byte b[] = {65,66,67,68};
        String str4 = new String(b);

        System.out.println(str3);

        String str5 = "Java";
        String str6 = new String("Java");

        System.out.println(str5==str6);

    }
}
