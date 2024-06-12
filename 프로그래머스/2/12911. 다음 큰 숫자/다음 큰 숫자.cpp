#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = n;
    string one = "";
    while(n!=0){
        n % 2 == 1 ? one += "1" : one +="0";
        n /=2;
    }
    int count_one_one = count(one.begin(),one.end(),'1');
    while(true){
        answer++;
        int tmp = answer;
        string two = "";
        while(tmp!=0){
            tmp%2 == 1? two += "1" : two+="0";
            tmp /=2;
        }
        int count_two_one = count(two.begin(),two.end(),'1');
        if(count_one_one == count_two_one){
            break;
        }
    }
    return answer;
}