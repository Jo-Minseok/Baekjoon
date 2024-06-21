function solution(s) {
    var regex = /[^0-9]/g;
    return (s.length == 4 || s.length == 6) && (s.length == s.replace(regex,"").length);
}