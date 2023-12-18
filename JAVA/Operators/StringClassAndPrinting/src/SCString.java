public class SCString {
    public static void main(String args[]) {
        String str = "A1!B2@C3#";
        System.out.println(str.replaceAll("[^a-zA-Z0-9]",""));

        String str2 = "   abc     def       gh    ij   ";
        System.out.println(str2.replaceAll("\\s+"," ").trim());

        str2 = str2.replaceAll("\\s+"," ").trim();
        String str3[] = str2.split("\\s");
        System.out.println(str3.length);

    }
}
