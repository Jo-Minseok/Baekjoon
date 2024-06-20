function solution(rsp) {
    var answer = '';
    for(char of rsp){
        switch(char){
            case '2':
                answer += '0';
                break;
            case '0':
                answer += '5';
                break;
            case '5':
                answer += '2';
                break;
        }
    }
    
    return answer;
}