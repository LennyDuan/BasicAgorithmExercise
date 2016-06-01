public class RecursionOne {
    public static void main(String []args) {
        long n = f(12);
        System.out.print(n);
    }

    public static int f(int i) {
        if (i >=1) {
            return f(i-1) * i;
        } else {
            return 1;
        }
    }
}
