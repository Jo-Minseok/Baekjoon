import java.util.*;

class Main{
    public static void main(String[] args){
        double num1,num2;
        Scanner sc = new Scanner(System.in);
        while(true){
            num1 = sc.nextDouble();
            num2 = sc.nextDouble();
            if(num1 == 0 || num2 == 0){
                System.out.println("AXIS");
            }
            if(num1 == 0 && num2 == 0){
                break;
            }
            else if(num1 > 0 && num2 > 0){
                System.out.println("Q1");
            }
            else if(num1 < 0 && num2 > 0){
                System.out.println("Q2");
            }
            else if(num1 < 0 && num2 < 0){
                System.out.println("Q3");
            }
            else if(num1 > 0 && num2 < 0){
                System.out.println("Q4");
            }
        }
    }
}