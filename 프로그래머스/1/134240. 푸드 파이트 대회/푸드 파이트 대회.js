function solution(food) {
    var answer = '';
    let foodCount = 0;
    for(let i=1;i<food.length;i++){
        foodCount += Math.floor(food[i]/2);
        answer += String(i).repeat(Math.floor(food[i]/2));
    }
    answer += '0' + [...answer.slice(0,foodCount)].reverse().join("");
    return answer;
}