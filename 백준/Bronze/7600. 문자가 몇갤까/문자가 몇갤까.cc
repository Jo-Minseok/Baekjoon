#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string text;
    while(true){
        getline(cin,text);
        if(text == "#"){
            break;
        }
        int arr[26] ={0}, result= 0;
        for(int i=0;i<text.length();i++){
            if(isalpha(toupper(text[i]))){
                if(arr[toupper(text[i])-'A'] == 0){
                    arr[toupper(text[i])-'A']++;
                    result++;
                }
            }
        }
        cout << result << "\n";
    }
}