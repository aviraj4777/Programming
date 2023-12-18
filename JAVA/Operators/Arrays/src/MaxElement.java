public class MaxElement {
    public static void main(String args[]) {
        int A[] = {3,9,8,7,12,6,15,5,4,10};
        int max = A[0];
        for(int x: A) {
            if (x > max)
                max = x;
        }
        System.out.println(max);
        int max1 = A[0];
        int max2 = A[0];

        for (int x: A) {
            if (x > max1) {
                max2 = max1;
                max1 = x;
            }
            else if (x > max2) {
                max2 = x;
            }
        }
        System.out.println(max1 + " " + max2);
    }
}
