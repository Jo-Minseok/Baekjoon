function solution(array, height) {
    var answer = array.filter(x=>{
        return x > height;
    }).length;
    return answer;
}