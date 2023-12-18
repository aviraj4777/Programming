package LambdaExpression;

@FunctionalInterface
interface Lambda {
    public int add(int x, int y);
}

public class LambdaArguments {
    public static void main(String[] args) {
        //Lambda l = (a,b)->{return a + b;};

        Lambda l = (a,b)->a+b;

        int sum = l.add(20,20);
        System.out.println(sum);
    }
}
