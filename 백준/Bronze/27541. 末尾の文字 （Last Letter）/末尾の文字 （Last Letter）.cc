#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num;
    string text;
    cin >> num;
    cin >> text;
    if(text[text.length()-1] == 'G'){
        text = text.substr(0,text.length()-1);
    }
    else{
        text += 'G';
    }
    cout << text;
}