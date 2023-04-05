import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String text;
        text = reader.readLine();
        int result =0;
        char[] a = text.toCharArray();
        for(int i=0;i<a.length;i++){
            if(i==0){
                result += 10;
            }
            else{
                if(a[i-1] == a[i]){
                    result += 5;
                }
                else{
                    result += 10;
                }
            }
        }
        System.out.println(result);
    }
}