public class BinaryOrNot {
    public static void main (String args[]) {
        int b = 1000110;

        String str = String.valueOf(b);
        System.out.println(str.matches("[01]+"));

        //For Hexa-Decimal
        String str1 = "B234A";
        System.out.println(str1.matches("[0-9A-F]+"));

        //For Date
        String str3 = "01/11/2000";
        System.out.println(str3.matches("[0-3][0-9]/[0-1][0-9]/[0-9]{4}"));

    }
}
