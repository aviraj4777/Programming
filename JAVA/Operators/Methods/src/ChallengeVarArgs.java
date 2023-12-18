public class ChallengeVarArgs {
    static int maxNumber(int ...A) {
        if (A.length == 0){
            return Integer.MIN_VALUE;
        }
        int max = 0;
        for(int i = 0; i < A.length - 1; i++) {
            if (A[i] > A[i+1])
                max = A[i];
            else
                max = A[i+1];
        }
        return max;
    }
    static int sumOfVarArgs(int ...A) {
        int sum = 0;
        for (int x : A) {
            sum += x;
        }
        return sum;
    }
    static double discountValue(double ...P){
        double sum = 0;
        for (double x : P)
            sum += x;

        if (sum < 500)
            return sum * 0.10;

        else if (sum > 500 && sum < 1000)
            return sum * 0.15;

        else
            return sum * 0.20;
    }
    public static void main(String args[]){
        System.out.println(maxNumber(new int[]{3,5,7,9,11,13,15}));
        System.out.println(sumOfVarArgs(new int[]{5,6,7,8,9,1,4}));
    }
}
