import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
    static Queue<Integer> list = new LinkedList<>();
    static boolean[][] arr =new boolean[1001][1001];
    static boolean[] visit = new boolean[1001];
    static int dot_count;

    public static void DFS(int start){
        System.out.printf("%d ",start);
        visit[start]=true;
        for(int i=1;i<=dot_count;i++){
            if(arr[start][i] && !visit[i]){
                DFS(i);
            }
        }
    }

    public static void BFS(int start){
        System.out.printf("%d ",start);
        visit[start] = true;
        for(int i=1;i<=dot_count;i++) {
            if (arr[start][i] && !visit[i]) {
                list.add(i);
                visit[i] = true;
            }
        }
        while(true) {
            if (list.isEmpty()) {
                break;
            }
            BFS(list.poll());
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int line_count,start_number;
        int dot1,dot2;
        dot_count = sc.nextInt();
        line_count = sc.nextInt();
        start_number = sc.nextInt();
        for(int i=0;i<line_count;i++){
            dot1 = sc.nextInt();
            dot2 = sc.nextInt();
            arr[dot1][dot2] = true;
            arr[dot2][dot1] = true;
        }
        sc.close();
        DFS(start_number);
        System.out.println();
        visit = new boolean[1001];
        BFS(start_number);
    }
}