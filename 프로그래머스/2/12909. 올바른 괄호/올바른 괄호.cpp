#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<int> stack_arr;
    for(int i = 0;i<s.length();i++){
        if(s[i] == '('){
            stack_arr.push(s[i]);
        }
        else{
            if(stack_arr.empty()||stack_arr.top() != '('){
                answer = false;
                break;
            }
            stack_arr.pop();
        }   
    }
    if(!stack_arr.empty()){
        answer = false;
    }

    return answer;
}