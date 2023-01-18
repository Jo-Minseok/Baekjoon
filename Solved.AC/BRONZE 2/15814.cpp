#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string a;
    cin >> a;
    int num, first_index, second_index;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> first_index >> second_index;
        swap(a[first_index], a[second_index]);
    }
    cout << a;
}