#include <iostream>

using namespace std;

int main(){
    int big_box, small_box;
    cin >> big_box;
    cin >> small_box;
    int result = big_box*8+small_box*3-28;
    cout << result;
}