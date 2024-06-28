function solution(brown, yellow) {
    let yellowOBJ = {height:0,width:0};
    for(let i=1;i<=Math.sqrt(yellow);i++){
        if(yellow%i === 0){
            yellowOBJ.width = yellow / i;
            yellowOBJ.height = i;
        }
        if (brown === (yellowOBJ.width + 2)*2 + yellowOBJ.height*2){
            return [yellowOBJ.width + 2,yellowOBJ.height+2];
        }
    }
}