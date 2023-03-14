import java.util.Scanner;


class Main{

    public static int gcd(int a, int b){
        if(b == 0){
            return a;
        }
        return gcd(b, a%b);
    }
    public static void main(String[] args){
        int a,b,c,d,gcd_num,denominator, numerator;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt(); // 분자
        b = sc.nextInt(); // 분모
        c = sc.nextInt(); // 분자2
        d = sc.nextInt(); // 분모2
        denominator = b*d;
        numerator = a*d + b*c;
        if(denominator > numerator){
            gcd_num = gcd(denominator,numerator);
        }
        else{
            gcd_num = gcd(numerator,denominator);
        }
        System.out.print(numerator/gcd_num + " " +denominator/gcd_num);
    }
}