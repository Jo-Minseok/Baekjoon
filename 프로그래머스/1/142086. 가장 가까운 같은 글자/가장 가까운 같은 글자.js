function solution(s) {
    var answer = [];
    answer = [...s].map((value,index) =>{
        for(let i=index-1;i>=0;i--){
            if(s[i] === value){
                return index - i;
            }
        }
        return -1;
    });
    return answer;
}