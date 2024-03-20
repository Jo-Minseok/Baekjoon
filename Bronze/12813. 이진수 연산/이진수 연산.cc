#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string first, second;
    cin >> first >> second;
    for(int i=0;i<first.length();i++){
        if(first[i]=='1' && second[i] == '1'){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }
    cout << "\n";
    for(int i=0;i<first.length();i++){
        if(first[i]=='1' || second[i] == '1'){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }
    cout << "\n";
    for(int i=0;i<first.length();i++){
        if(first[i]!=second[i]){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }
    cout << "\n";
    for(int i=0;i<first.length();i++){
        if(first[i]=='0'){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }
    cout << "\n";
    
    for(int i=0;i<first.length();i++){
        if(second[i]=='0'){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }
}