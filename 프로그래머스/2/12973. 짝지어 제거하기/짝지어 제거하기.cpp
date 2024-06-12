#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    stack<char> sl;
    for(int i=0;i<s.length();i++){
        if(sl.empty()){
            sl.push(s[i]);
        }
        else{
            sl.top() == s[i] ? sl.pop() : sl.push(s[i]);
        }
    }
    if(sl.empty()){
        return 1;
    }
    else{
        return 0;
    }
}