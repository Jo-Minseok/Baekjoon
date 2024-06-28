function solution(s, n) {
    const lowerPattern = /[a-z]/;
    const upperPattern = /[A-Z]/;
    s = [...s].map((value) =>{
        if(lowerPattern.test(value)){
            value = String.fromCharCode((value.charCodeAt() + n));
            value = !lowerPattern.test(value) ? String.fromCharCode(value.charCodeAt() - 'z'.charCodeAt() + 'a'.charCodeAt()-1) : value;
        }
        else if(upperPattern.test(value)){
            value = String.fromCharCode((value.charCodeAt() + n));
            value = !upperPattern.test(value) ? String.fromCharCode(value.charCodeAt() - 'Z'.charCodeAt() + 'A'.charCodeAt()-1) : value;
        }
        return value;
    }).join("");
    return s;
}