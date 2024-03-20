#include <iostream>
using namespace std;
int main(){
    string a;
    int i=0;
    cin >> a;
    char b = a[0];
    while(true){
        if(a[i] != b){
            break;
        }
        i++;
    }
    cout << i;
}