#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int j = 2;
    string text;
    while(true){
        getline(cin,text);
        if(text == "Was it a cat I saw?"){
            break;
        }
        for(int i=0;i<text.length();i+=j){
            cout << text[i];
        }
        cout << "\n";
        j++;
    }
}