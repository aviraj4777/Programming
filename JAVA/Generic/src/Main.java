import java.util.ArrayList;
import java.util.List;

class GenericsExample {

    public static <T extends Number> T add(T a, T b) {
        if (a instanceof Integer && b instanceof Integer) {
            return (T) Integer.valueOf(a.intValue() + b.intValue());
        } else if (a instanceof Double && b instanceof Double) {
            return (T) Double.valueOf(a.doubleValue() + b.doubleValue());
        } else if (a instanceof Float && b instanceof Float) {
            return (T) Float.valueOf(a.floatValue() + b.floatValue());
        }
        return null;
    }

    public static void printOnlyIntegerClassorSuperClass(List<? super Integer> list) {
        System.out.println(list);
    }

    public static <T extends Number> void printWithExtend(List<? extends T> list) {
        System.out.println(list);
    }

    public static void printList(List<?> list) {
        System.out.println(list);
    }

    public static <T extends Number> double sum(List<? extends T> list) {
        double total = 0;
        for (T num : list) {
            total += num.doubleValue();
        }
        return total;
    }

    public static void main(String[] args) {
        System.out.println("Calling Generic Method ADD");
        Integer result1 = add(10, 12);
        System.out.println("Adding 10 + 12 = " + result1);

        Float result2 = add(5.5f, 5.5f);
        System.out.println("Adding 5.5f + 5.5f = " + result2);

        Double result3 = add(5.5d, 5.5d);
        System.out.println("Adding 5.5d + 5.5d = " + result3);

        System.out.println("Calling Generic Method with lower bound (super)");
        List<Integer> integerList = new ArrayList<>();
        integerList.add(4);
        integerList.add(5);
        integerList.add(6);
        integerList.add(7);
        printOnlyIntegerClassorSuperClass(integerList);

        System.out.println("Calling Generic Method with upper bound (extends)");
        List<Integer> integerList2 = new ArrayList<>();
        integerList2.add(4);
        integerList2.add(5);
        integerList2.add(6);
        integerList2.add(7);
        printWithExtend(integerList2);

        System.out.println("Calling Generic Method with unbounded (unknown)");
        List<Integer> integerList3 = new ArrayList<>();
        integerList3.add(4);
        integerList3.add(5);
        integerList3.add(8);
        integerList3.add(7);
        printList(integerList3);

        System.out.println("Calling Sum Method");
        double sumResult = sum(integerList3);
        System.out.println("Total sum of arrays is: " + sumResult);
    }
}
