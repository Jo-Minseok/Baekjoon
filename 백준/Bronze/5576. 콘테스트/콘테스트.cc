#include <iostream>
#include <algorithm>

bool comp(int a, int b){
    return a > b;
}

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[10];
    int arr2[10];
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    for(int i=0;i<10;i++){
        cin >> arr2[i];
    }
    sort(arr,arr+10, comp);
    sort(arr2,arr2+10, comp);
    cout << arr[0] + arr[1] + arr[2] << " " << arr2[0] + arr2[1] + arr2[2];
}