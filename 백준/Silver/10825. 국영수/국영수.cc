#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

bool comp(pair<string,vector<int>> a, pair<string,vector<int>> b){
    if(a.second[0] > b.second[0]){
        return true;
    }
    else if(a.second[0] == b.second[0]){
        if(a.second[1] < b.second[1]){
            return true;
        }
        else if(a.second[1] == b.second[1]){
            if(a.second[2] > b.second[2]){
                return true;
            }
            else if(a.second[2] == b.second[2]){
                if(a.first < b.first){
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case, kor, eng, math;
    string name;
    map<string,vector<int>>list2;
    cin >> test_case;
    while(test_case--){
        cin >> name >> kor >> eng >> math;
        list2[name].push_back(kor);
        list2[name].push_back(eng);
        list2[name].push_back(math);
    }
    vector<pair<string,vector<int>>>result(list2.begin(),list2.end());
    sort(result.begin(),result.end(),comp);
    for(auto i = result.begin();i!=result.end();i++){
        cout << i->first << "\n";
    }
}