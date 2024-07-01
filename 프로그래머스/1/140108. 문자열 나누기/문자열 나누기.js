function solution(s) {
    var answer = 0;
    while(true){
        if(s.length == 0){
            break;
        }
        let first = s[0];
        let firstCount = 0, otherCount = 0;
        let breakCheck = false;
        for(let i=0;i<s.length;i++){
            if(first === s[i]){
                firstCount++;
            }
            else{
                otherCount++;
            }
            if(firstCount === otherCount){
                s = s.slice(i+1,s.length);
                answer++;
                break;
            }
            else if(i === s.length-1){
                answer++;
                breakCheck = true;
            }
        }
        if(breakCheck){
            break;
        }
    }
    
    return answer;
}