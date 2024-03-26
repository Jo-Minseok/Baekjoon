#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case,result =0,num;
    cin >> test_case;
    while(test_case--){
        bool arr[100] = {false};
        cin >> num;
        for(int i=2;i<=num;i++){
            for(int j=1;j*i<=num;j++){
                if(!arr[i*j-1]){
                    arr[i*j-1] = true;
                }
                else{
                    arr[i*j-1] = false;
                }
            }
        }
        cout << num - count(&arr[0],&arr[99],true) << "\n";
    }
}