import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String[] tokens = reader.readLine().split(" ");
        char[] num1 = tokens[0].toCharArray();
        char[] num2 = tokens[1].toCharArray();
        BigInteger result = BigInteger.ZERO;
        for (int i = 0; i < num1.length; i++) {
            for (int j = 0; j < num2.length; j++) {
                result = result.add(BigInteger.valueOf((num1[i] - '0') * (num2[j] - '0')));
            }
        }
        System.out.print(result);
    }
}