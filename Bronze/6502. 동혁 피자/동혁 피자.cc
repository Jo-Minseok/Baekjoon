#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 1;; i++)
    {
        double radius, width, length, slash;
        cin >> radius;
        if (radius == 0)
        {
            break;
        }
        cin >> width >> length;
        slash = sqrt(width * width + length * length);
        if (slash / 2 <= radius)
        {
            cout << "Pizza " << i << " fits on the table.\n";
        }
        else
        {
            cout << "Pizza " << i << " does not fit on the table.\n";
        }
    }
}