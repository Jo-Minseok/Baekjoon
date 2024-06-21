function solution(n, m) {
    let num1 = n, num2 = m;
    if(n < m){
        var tmp = m;
        m = n;
        n = tmp;
    }
    while(num2>0){
        let r = num1 % num2;
        num1 = num2;
        num2 = r;
    }
    var answer = [num1, n*m/num1];
    return answer;
}