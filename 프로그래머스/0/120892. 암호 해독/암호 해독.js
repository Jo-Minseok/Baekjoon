function solution(cipher, code) {
    var answer = '';
    [...cipher].filter(
    (value,index)=>{
        (index+1) % code === 0 ? answer += value : null;
    });
    return answer;
}