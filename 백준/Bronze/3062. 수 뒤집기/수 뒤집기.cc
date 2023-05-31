#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case;
    string num;
    cin >> test_case;
    while(test_case--){
        cin >> num;
        bool check = true;
        string tmp = num;
        reverse(num.begin(),num.end());
        int num_a = stoi(tmp) + stoi(num);
        tmp = to_string(num_a);
        for(int i=0,j=tmp.length()-1;i<tmp.length();i++,j--){
            if(tmp[i] != tmp[j]){
                check = false;
                break;
            }
        }
        if(check){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}