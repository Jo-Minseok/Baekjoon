#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case;
    string num_s;
    cin >> test_case;
    while(test_case--){
        cin >> num_s;
        int num_p = pow(stoi(num_s),2);
        int len = pow(10,num_s.length());
        num_p %= len;
        if(num_p == stoi(num_s)){ 
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}