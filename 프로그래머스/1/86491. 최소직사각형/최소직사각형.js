function solution(sizes) {
    let width = 0, height =0;
    sizes.forEach((value)=>{
        value.sort((a,b) => a-b);
        if(width < value[0]){
            width = value[0];
        }
        if(height < value[1]){
            height = value[1];
        }
    });
    return width * height;
}