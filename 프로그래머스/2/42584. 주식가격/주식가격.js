function solution(prices) {
    let result = [];
    prices.forEach((value,index) =>{
        let resultTime = 0;
        for(let i=index+1;i<prices.length;i++,resultTime++){
            if(value > prices[i]){
                resultTime++;
                break;
            }
        }
        result.push(resultTime);
    });
    return result;//result: List
}