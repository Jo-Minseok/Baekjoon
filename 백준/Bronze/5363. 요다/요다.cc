#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_count;
    string text;
    cin >> test_count;
    cin.ignore();
    for (int i = 0; i < test_count; i++)
    {
        getline(cin, text);
        stringstream iter(text);
        string front, start;
        int index = 0;
        while (iter >> front)
        {
            if (index == 0 || index == 1)
            {
                start += front + " ";
            }
            else
            {
                cout << front << " ";
            }
            index++;
        }
        cout << start << "\n";
    }
}