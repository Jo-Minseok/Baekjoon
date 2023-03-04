#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int now,target;
    int bookmark,num;
    cin >> now >> target;
    cin >> bookmark;
    int min = abs(now-target);
    for(int i=0;i<bookmark;i++){
        cin >> num;
        if(min > abs(num-target)+1){
            min = abs(num-target)+1;
        }
    }
    cout << min;
}