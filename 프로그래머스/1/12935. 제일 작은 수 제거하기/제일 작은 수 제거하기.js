function solution(arr) {
    arr = arr.filter(x=> x!==Math.min.apply(Math,arr));
    arr.length === 0 ? arr.push(-1):null;
    return arr;
}