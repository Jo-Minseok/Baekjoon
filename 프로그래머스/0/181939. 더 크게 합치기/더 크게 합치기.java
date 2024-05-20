class Solution {
    public int solution(int a, int b) {
        int answer = 0;
        String a_text = Integer.toString(a);
        String b_text = Integer.toString(b);
        String example_1 = a_text + b_text;
        String example_2 = b_text + a_text;
        if(Integer.parseInt(example_1) > Integer.parseInt(example_2)){
            answer = Integer.parseInt(example_1);
        }
        else{
            answer = Integer.parseInt(example_2);
        }
        return answer;
    }
}