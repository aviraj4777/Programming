public class StringMethodsChallenge {
    public static void main (String args[]) {
        String str = new String("programmer@gmail.com");
        String str1 = new String("aviraj4777@hotmail.com");

        System.out.println(str.endsWith("@gmail.com"));
        System.out.println(str1.endsWith("@gmail.com"));

        int i = str.indexOf('@');
        System.out.println("Username is " + str.substring(0,i));
        System.out.println("Domain name is " + str.substring(i+1,str.length()));
    }
}

