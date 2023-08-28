#include <iostream>
using namespace std;

int ROW, COLUMN, HEIGHT, WIDTH;

void printX()
{
    for (int i = 0; i < WIDTH; i++)
    {
        cout << "X";
    }
}
void printDot()
{
    for (int i = 0; i < WIDTH; i++)
    {
        cout << ".";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> COLUMN >> ROW >> HEIGHT >> WIDTH;

    for (int j = 0; j < COLUMN; j++)
    {
        if (j % 2 == 0)
        {
            for (int k = 0; k < HEIGHT; k++)
            {
                for (int i = 0; i < ROW; i++)
                {
                    if (i % 2 == 0)
                    {
                        printX();
                    }
                    else
                    {
                        printDot();
                    }
                }
                cout << "\n";
            }
        }
        else
        {
            for (int k = 0; k < HEIGHT; k++)
            {
                for (int i = 0; i < ROW; i++)
                {
                    if (i % 2 == 0)
                    {
                        printDot();
                    }
                    else
                    {
                        printX();
                    }
                }
                cout << "\n";
            }
        }
    }
}