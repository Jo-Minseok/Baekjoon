#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int countAlgorithm = 0,removeZero = 0,sLength = 0;
    while(true){
        countAlgorithm++;
        sLength = s.length();
        auto it = remove(s.begin(),s.end(),'0');
        s.resize(it - s.begin());
        removeZero += sLength - s.length();
        sLength = s.length();
        if(sLength == 1){
            break;
        }
        s = "";
        while(sLength != 0){
            s += to_string(sLength % 2);
            sLength /= 2;
        }
        reverse(s.begin(),s.end());
    }
    answer.push_back(countAlgorithm);
    answer.push_back(removeZero);
    return answer;
}