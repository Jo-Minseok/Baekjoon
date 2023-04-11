#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string text, temp;
    cin >> text;
    stringstream ss(text);
    vector<string> list;
    while (getline(ss, temp, ','))
    {
        list.push_back(temp);
    }
    cout << list.size();
}