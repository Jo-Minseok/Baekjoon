#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string text;
    cin >> text;
    if (text == "SONGDO")
    {
        cout << "HIGHSCHOOL";
    }
    else if (text == "CODE")
    {
        cout << "MASTER";
    }
    else if (text == "2023")
    {
        cout << "0611";
    }
    else if (text == "ALGORITHM")
    {
        cout << "CONTEST";
    }
}