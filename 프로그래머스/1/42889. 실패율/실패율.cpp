#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int TMP;

bool notClear(int number){
    return TMP == number;
}

bool Reach(int number){
    return TMP <= number;
}

bool comp(pair<int,double> a, pair<int, double> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    else{
        return a.second > b.second;
    }
}

// N: 전체 스테이지 개수, stages: 게임을 이용하는 사용자가 현재 멈춰있는 스테이지의 번호
// 실패율 = 스테이지에 도달했으나 아직 클리어하지 못 한 플레이어의 수 / 스테이지에 도달한 플레이어 수
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int,double>> l;
    pair<int,double> data;
    for(int i=1;i<=N;i++){
        TMP = i;
        int fault = count_if(stages.begin(),stages.end(),notClear);
        int reach = count_if(stages.begin(),stages.end(),Reach);
        if(fault == 0 || reach == 0){
            data = {i,0.0};
        }
        else{
            data = {i,(double)fault/reach};
        }
        
        l.push_back(data);
    }
    
    sort(l.begin(),l.end(),comp);
    for(auto i : l){
        answer.push_back(i.first);
    }
    return answer;
}