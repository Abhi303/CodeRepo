public class lambdainterface {
    @FunctionalInterface
    interface Print {
        void print();
    }
    public static void main(String args[]) {
        
        
        Print p1 = () -> { System.out.println("P1"); };
        Print p2 = () -> { System.out.println("P2"); };
    p1.print();
    p2.print();
    }
}
