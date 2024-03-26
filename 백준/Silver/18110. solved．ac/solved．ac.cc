#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int opinion[300000] = {0};
    int opinion_count;
    double sum = 0;
    cin >> opinion_count;
    if (opinion_count == 0)
    {
        cout << 0;
        return 0;
    }
    int remove_human = round(opinion_count * 0.15);

    for (int i = 0; i < opinion_count; i++)
    {
        cin >> opinion[i];
    }
    sort(opinion, opinion + opinion_count);
    for (int i = remove_human; i < opinion_count - remove_human; i++)
    {
        sum += opinion[i];
    }
    cout << round(sum / (opinion_count - remove_human * 2));
}