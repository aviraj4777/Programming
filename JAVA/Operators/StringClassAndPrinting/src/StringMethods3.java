public class StringMethods3 {
    public static void main (String args[]) {
        String str1 = "Pyramid";
        String str2 = "pyramid";

        String str3 = new String("Pyramid");
        System.out.println(str1.equals(str2));

        System.out.println(str1.equalsIgnoreCase(str2));

        System.out.println(str1 == str2);

        System.out.println(str1.equals(str3));

        System.out.println(str1 == str3);

        System.out.println(str1.compareTo(str3));

        System.out.println(str1.compareTo(str2));

        System.out.println(str2.compareTo(str1));

        String str4 = new String("china mall");

        String str5 = new String("china call");

        System.out.println(str4.compareTo(str5));

        System.out.println(str1.compareToIgnoreCase(str2));

        String str6 = new String("the great wall of china");

        System.out.println(str6.contains("wall"));

        System.out.println(str1.concat(str2));

        System.out.println(String.valueOf('A'));
    }
}
