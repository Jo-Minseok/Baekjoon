function solution(s) {
    var answer = [...s].sort((x,y) => {
        if(x>y){
            return -1;
        }
        else if(x===y){
            return 0;
        }
        else{
            return 1;
        }
    }).join("");
    return answer;
}