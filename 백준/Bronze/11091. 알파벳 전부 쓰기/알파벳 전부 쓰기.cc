#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--)
    {
        int arr[26] = {0};
        string text,result;
        getline(cin, text);
        for(int i=0;i<text.length();i++){
            if(isalpha(text[i])){
                arr[tolower(text[i])-'a']++;
            }
        }
        for(int i=0;i<26;i++){
            if(!arr[i]){
                result += (i + 'a');
            }
        }
        if(result == ""){
            cout << "pangram\n";
        }
        else{
            cout << "missing " << result << "\n";
        }
    }
}