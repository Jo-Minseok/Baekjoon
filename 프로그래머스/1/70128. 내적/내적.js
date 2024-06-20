function solution(a, b) {
    let answer = 0;
    return a.reduce((acc, curVal, curIdx, a) => {return acc + (a[curIdx] * b[curIdx])},0);
}