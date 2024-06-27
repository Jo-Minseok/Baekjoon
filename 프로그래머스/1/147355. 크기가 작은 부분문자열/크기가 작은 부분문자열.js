function solution(t,p){
  return [...t].map((value,index) => {
      let tmp = t.slice(index,index+p.length);
      if(tmp.length >= p.length){
        return tmp;   
      }
  }).filter((value) => parseInt(value) <= parseInt(p)).length;
}