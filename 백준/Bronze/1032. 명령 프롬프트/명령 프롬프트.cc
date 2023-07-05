#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case;
    string arr[51];
    string result;
    cin >> test_case;
    for(int i=0;i<test_case;i++){
        cin >> arr[i];
    }
    for(int i=0;i<arr[0].length();i++){
        bool check = true;
        for(int j=0;j<test_case;j++){
            if(arr[0][i] != arr[j][i]){
                check = false;
            }
        }
        if(check){
            result += arr[0][i];
        }
        else{
            result += "?";
        }
    }
    cout << result;
}