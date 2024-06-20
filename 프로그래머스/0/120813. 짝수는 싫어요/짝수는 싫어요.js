function solution(n) {
    var arr = [];
    for(let i = 0; i<=n;i++){
        if(i&1){
            arr.push(i);
        }
    }
    return arr;
}