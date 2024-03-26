#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long num1,num2,num3;
    cin >> num1 >> num2 >> num3;
    long long result = num1 * num2 * num3;
    string text = to_string(result);
    for(int i=0;i<10;i++){
        cout << count(text.begin(),text.end(),i+'0') << "\n";
    }
}