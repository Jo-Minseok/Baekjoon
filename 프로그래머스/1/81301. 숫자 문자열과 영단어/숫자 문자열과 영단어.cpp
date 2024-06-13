#include <string>
#include <vector>
using namespace std;

string numberToText[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
int solution(string s) {
    int answer = 0;
    
    for(int i=0;i<10;i++){
        while(s.find(numberToText[i]) != -1){
            s.replace(s.find(numberToText[i]),numberToText[i].length(),to_string(i));
        }
    }
    answer = stoi(s);
    return answer;
}