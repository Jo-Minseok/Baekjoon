#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int test_case,A,B,X;
    cin >> test_case;
    while(test_case--){
        cin >> A >> B >> X;
        cout << A*(X-1)+B << "\n";
    }
}