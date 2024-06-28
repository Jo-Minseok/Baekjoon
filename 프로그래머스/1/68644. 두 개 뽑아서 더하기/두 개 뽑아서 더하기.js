function solution(numbers) {
    var answer = new Set();
    numbers.forEach((value,index) =>{
        for(let i=index+1;i<numbers.length;i++){
            answer.add(value + numbers[i]);
        }
    });
    return Array.from(answer).sort((a,b) => a-b);
}