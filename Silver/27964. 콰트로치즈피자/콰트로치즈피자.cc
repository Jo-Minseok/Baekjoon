#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<string> l;
    int count_mat;
    int result = 0;
    string cheese;
    cin >> count_mat;
    while (count_mat--)
    {
        cin >> cheese;
        if (cheese.length() >= 6 && cheese.substr(cheese.length() - 6, 6) == "Cheese")
        {
            l.insert(cheese);
        }
    }
    if (l.size() >= 4)
    {
        cout << "yummy";
    }
    else
    {
        cout << "sad";
    }
}