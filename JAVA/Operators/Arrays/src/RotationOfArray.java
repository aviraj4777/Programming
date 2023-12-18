public class RotationOfArray {
    public static void main(String args[]) {

        //Left Rotation
        int A[] = {5,9,6,10,12,7,3,5,4,2};

        int temp = A[0];

        for(int i = 0; i < A.length-1; i++){
            A[i] = A[i+1];
        }
        A[A.length - 1] = temp;

        for(int x:A) {
            System.out.print(x +" ");
        }
        System.out.println("");

        //Right Rotation

        int B[] = {5,9,6,10,12,7,3,5,4,2};

        temp = B[B.length - 1];

        for (int i = B.length - 1; i > 0; i--) {
            B[i] = B[i - 1];
        }
        B[0] = temp;

        for (int x : B) {
            System.out.print(x + " ");
        }
    }
}
