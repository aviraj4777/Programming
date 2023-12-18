import java.util.Scanner;

public class InsertionAndDeletion {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = 6;

        int A[] = new int[10];
        for (int i = 0; i < n; i++){
            A[i] = sc.nextInt();
        }
        int index = 2;
        int value = 15;

        for (int i = 0; i < n; i++){
            System.out.print(A[i] + " ");
        }
        for (int i = n; i > index; i--) {
            A[i] = A[i - 1];
        }
        A[index] = value;

        for (int i = 0; i < n + 1; i++){
            System.out.print(A[i] + " ");
        }
    }
}
