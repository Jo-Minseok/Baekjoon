#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool comp(string a, string b){
    return a<b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string text;
    cin >> text;
    string *arr = new string[text.length()];
    for(int i=0;i<text.length();i++){
        arr[i] = text.substr(i,text.length()-i);
    }

    sort(arr,arr+text.length(),comp);
    for(int i=0;i<text.length();i++){
        cout << arr[i] << "\n";
    }
}