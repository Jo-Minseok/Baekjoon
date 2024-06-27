function solution(s) {
    var answer = s.split(" ").map((value) => [...value].map((value2,index)=>index%2 === 0 ? value2.toUpperCase() : value2.toLowerCase()).join("")).join(" ");
    return answer;
}