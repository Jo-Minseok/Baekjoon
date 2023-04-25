#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;
    for (int i = num; i >= 0; i--)
    {
        if (i == 0) {
            cout << "No more";
        }
        else {
            cout << i;
        }
        if (i == 1) {
            cout << " bottle ";
        }
        else {
            cout << " bottles ";
        }
        cout << "of beer on the wall, ";
        if (i == 0) {
            cout << "no more";
        }
        else {
            cout << i;
        }
        if (i == 1) {
            cout << " bottle";
        }
        else {
            cout << " bottles";
        }
        cout << " of beer.\n";

        if (i == 0) {
            cout << "Go to the store and buy some more, ";
        }
        else {
            cout << "Take one down and pass it around, ";
        }
        if (i - 1 > 0) {
            cout << i - 1;
            if (i - 1 == 1) {
                cout << " bottle";
            }
            else {
                cout << " bottles";
            }
        }
        else if(i-1==0){
            cout << "no more";
            if (i - 1 == 1) {
                cout << " bottle";
            }
            else {
                cout << " bottles";
            }
        }
        else{
            cout << num;
            if (num == 1) {
                cout << " bottle";
            }
            else {
                cout << " bottles";
            }
        }
        cout << " of beer on the wall.\n\n";
    }
}