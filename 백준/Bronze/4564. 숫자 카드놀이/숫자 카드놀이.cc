#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string num;
    while(true){
        cin >> num;
        if(num == "0"){
            break;
        }
        while(true){
            if(num.length() == 1){
                cout << num;
                break;
            }
            else{
                cout << num << " ";
                int tmp = 1;
                for(int i=0;i<num.length();i++){
                    tmp *= num[i]-'0';
                }
                num = to_string(tmp);
            }
        }
        cout << "\n";
    }
}