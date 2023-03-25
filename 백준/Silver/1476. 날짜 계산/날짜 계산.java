import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int E = sc.nextInt(); // 1<= E <= 15
        int S = sc.nextInt(); // 1<= S <= 28
        int M = sc.nextInt(); // 1<= M <= 19
        int year = 1;
        while(true){
            if((year-E)%15 == 0 && (year-S) % 28 == 0 && (year-M) % 19 == 0){
                break;
            }
            else{
                year++;
            }
        }
        System.out.println(year);
    }
}