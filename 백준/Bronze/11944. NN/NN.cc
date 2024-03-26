#include <iostream>
#include <string>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, m;
    std::cin >> n >> m;
    if (n < m)
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << n;
        }
    }
    else
    {
        std::string a = std::to_string(n);
        for (int i = 0, j = 0; i < m; j++)
        {
            if (j == a.length())
            {
                j = 0;
            }
            i++;
            std::cout << a[j];
        }
    }
}