#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(pair<string,int> one, pair<string,int> two){
    return one.second > two.second;
}

vector<int> solution(string s) {
    vector<int> answer;
    string tmpNumber;
    map<string,int> numberFreq;
    s = s.substr(1,s.length()-2);
    bool open = false;
    for(int i=0;i<s.length();i++){
        if(s[i] == '{'){
            open = true;
            continue;
        }
        else if(s[i] == '}'){
            open = false;
            numberFreq[tmpNumber]++;
            tmpNumber.clear();
        }
        else if(s[i] == ','){
            if(open){
                numberFreq[tmpNumber]++;
                tmpNumber.clear();
            }
            else{
                continue;
            }
        }
        else{
            tmpNumber += s[i];
        }
    }
    vector<pair<string,int>> sorting(numberFreq.begin(),numberFreq.end());
    sort(sorting.begin(),sorting.end(), cmp);
    for(auto i : sorting){
        answer.push_back(stoi(i.first));
    }
    return answer;
}