function solution(my_string) {
    let answer = 0;
    for(n of my_string){
        if(n >= '0' && n<='9'){
            answer += n-'0';
        }
    }
    return answer;
}