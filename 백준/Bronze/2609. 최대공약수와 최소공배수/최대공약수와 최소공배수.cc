#include <iostream>

using namespace std;

int main(){
    int num1,num2;
    cin >> num1 >> num2;
    int max = 0;
    for(int i=1;i<=num2;i++){
        if(num2%i==0){
            if(num1%i==0){
                if(max<i){
                    max = i;
                }
            }
        }
    }
    cout << max << endl;
    cout << num1*num2/max << endl;
}