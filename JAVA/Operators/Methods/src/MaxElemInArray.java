public class MaxElemInArray {
    static int maxElem(int A[]) {
        int max = -1;
        for (int i = 0; i < (A.length) - 1; i++) {
            if (A[i] > A[i + 1])
                max = A[i];
            else
                max = A[i + 1];
        }
        return max;
    }
    public static void main(String args[]) {
        int A[] = {2,5,6,7,8,9,11,17};
        System.out.println(maxElem(A));
    }
}
