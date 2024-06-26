function solution(d, budget) {
    d.sort((a,b) => {
        return a-b
    });
    var answer = d.reduce((acc,value) => {
        if(budget - value >= 0){
            acc +=1;
            budget -= value;
        }
        return acc;
    },0);
    return answer;
}