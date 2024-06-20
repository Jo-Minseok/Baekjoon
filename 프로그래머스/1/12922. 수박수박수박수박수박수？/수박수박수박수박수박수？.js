function solution(n) {
    var answer = []
    for(let i = 0;i<n;i++){
        i & 1 ? answer.push("박") : answer.push("수");
    }
    return answer.join("");
}