#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> numberList;
    string tmpNumber = "";
    int numIndex = 0,tmpNum;
    
    for(int i=0;i<dartResult.length();i++){
        char c = dartResult[i];
        if(isdigit(c)){
            tmpNumber += c;
        }
        else if(c == 'S'){
            tmpNum = stoi(tmpNumber);
            numberList.push_back(tmpNum);
            tmpNumber.clear();
            numIndex++;
        }
        else if(c == 'D'){
            tmpNum = stoi(tmpNumber);
            numberList.push_back(pow(tmpNum,2));
            tmpNumber.clear();
            numIndex++;
        }
        else if(c == 'T'){
            tmpNum = stoi(tmpNumber);
            numberList.push_back(pow(tmpNum,3));
            tmpNumber.clear();
            numIndex++;
        }
        else if(c == '*'){
            numberList[numIndex-1] *=2;
            if(numIndex !=1){
                numberList[numIndex-2] *=2;
            }
        }
        else if(c == '#'){
            numberList[numIndex-1] *=-1;
        }
    }
    for(auto i:numberList){
        answer += i;
    }
    return answer;
}