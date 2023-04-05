import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(reader.readLine());
        String text = st.nextToken();
        int sub = Integer.parseInt(st.nextToken());
        int result =0;
        char[] arr = text.toCharArray();
        for(int i=arr.length-1,j=0;i>=0;i--,j++){
            if(Character.isAlphabetic(arr[i])){
                result += (arr[i]-'A' + 10)*Math.pow(sub,j);
            }
            else {
                result += (arr[i]-'0')*Math.pow(sub,j);
            }
        }
        System.out.println(result);
        reader.close();
    }
}