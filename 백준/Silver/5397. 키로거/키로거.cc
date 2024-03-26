#include <iostream>
#include <list>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case;
    string text;
    list<char> list_a;
    list<char>::iterator it;
    cin >> test_case;
    while (test_case--)
    {
        int check = 0;
        cin >> text;
        list_a.clear();
        it = list_a.begin();
        for (int i = 0; i < text.length(); i++)
        {
            switch (text[i])
            {
            case '<':
                if (it != list_a.begin())
                {
                    it--;
                }
                break;
            case '>':
                if (it != list_a.end())
                {
                    it++;
                }
                break;
            case '-':
                if (it != list_a.begin())
                {
                    it = list_a.erase(--it);
                }
                break;
            default:
                it = list_a.insert(it, text[i]);
                it++;
            }
        }

        for (char i : list_a)
        {
            cout << i;
        }
        cout << "\n";
    }
}