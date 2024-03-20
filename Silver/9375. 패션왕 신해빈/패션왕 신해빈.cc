#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case, wear_count;
    cin >> test_case;
    while (test_case--)
    {
        string cloth_name, id;
        map<string, int> clothes;
        cin >> wear_count;
        for (int i = 0; i < wear_count; i++)
        {
            cin >> cloth_name >> id;
            clothes[id]++;
        }
        int result = 1;
        for (auto i : clothes)
        {
            result *= (i.second + 1);
        }
        result--;
        cout << result << "\n";
    }
}