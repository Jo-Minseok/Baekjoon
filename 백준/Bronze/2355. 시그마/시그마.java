import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String[] tokens = reader.readLine().split(" ");
        long a = Integer.parseInt(tokens[0]);
        long b = Integer.parseInt(tokens[1]);
        BigInteger num = BigInteger.ZERO;
        if (a > b) {
            long tmp = a;
            a = b;
            b = tmp;
        }
        num = num.add(BigInteger.valueOf((a + b) * (b - a + 1) / 2));
        System.out.println(num);
    }
}