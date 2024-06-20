function solution(array) {
    array = array.sort((one,two) => {
        return one - two;
    });
    return array[Math.floor(array.length/2)];
}