import java.util.Scanner;

class Main{
    static boolean[][] arr;
    static boolean[] visit;
    static int result =0;
    static int computer_count,connect;
    public static void DFS(int start){
        visit[start] = true;
        for(int i=1;i<=computer_count;i++){
            if(arr[start][i] && !visit[i]){
                visit[i] = true;
                result++;
                DFS(i);
            }
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        computer_count = sc.nextInt();
        connect = sc.nextInt();
        int com1, com2;
        arr = new boolean[computer_count+1][computer_count+1];
        visit = new boolean[computer_count+1];
        for(int i=0;i<connect;i++){
            com1 = sc.nextInt();
            com2 = sc.nextInt();
            arr[com1][com2] = true;
            arr[com2][com1] = true;
        }
        DFS(1);
        sc.close();
        System.out.print(result);
    }
}