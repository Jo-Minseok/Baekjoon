#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    cout.precision(9);
    cout << fixed;

    cout << "n e\n";
    cout << "- -----------\n";
    cout << "0 1\n";
    cout << "1 2\n";
    cout << "2 2.5\n";
    for (int i = 3; i <= 9; i++)
    {
        double sum = 0;
        for (int j = 0; j <= i; j++)
        {
            double fac = 1;
            for (int k = j; k >= 1; k--)
            {
                fac *= k;
            }
            sum += 1 / fac;
        }
        cout << i << " " << sum << "\n";
    }
}