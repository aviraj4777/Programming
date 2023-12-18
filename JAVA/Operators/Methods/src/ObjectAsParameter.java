public class ObjectAsParameter {
    void update(int A[]) {
        A[0] = 25;
    }
    void change(int A[], int index, int value){
        A[index] = value;
    }

    public static void main (String args[]) {
        int A[] = {2,3,4,5,6};
        //update(A);
        ObjectAsParameter obj = new ObjectAsParameter();
        obj.update(A);
        obj.change(A, 3, 9);
        for(int x:A)
            System.out.println(x);
    }
}
