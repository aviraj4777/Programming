class BlockTest {
    static {
        System.out.println("Inside BlockTest Class");
    }
}
public class StaticBlock {
    static {
        System.out.println("Block 1");
    }
    public static void main(String[] args) {
        BlockTest t1 = new BlockTest();
        System.out.println("Main");
    }
    static {
        System.out.println("Block 2");
    }
}
