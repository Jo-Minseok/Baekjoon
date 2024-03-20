#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char a;
    string text;
    while(true){
        cin >> a;
        if(a == '#'){
            break;
        }
        int result = 0;
        getline(cin,text);
        for(int i=0;i<text.length();i++){
            if(a == text[i] || toupper(a) == text[i]){
                result++;
            }
        }
        cout << a << " " << result << "\n";
    }
}