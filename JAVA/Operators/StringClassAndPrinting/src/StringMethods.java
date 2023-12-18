public class StringMethods {
    public static void main(String args[]) {
        String str = new String("netbeans");
        int len = str.length();
        System.out.println(len);

        String str2 = str.toUpperCase();
        System.out.println(str.toUpperCase());

        str = str.toLowerCase();
        System.out.println(str);

        String str3 = new String("     netbeans      ");
        System.out.println(str3);

        System.out.println(str3.trim());

        System.out.println(str3);

        System.out.println(str.substring(3,5));

        System.out.println(str + "  " + str.replace('e', 'M'));
    }
}
