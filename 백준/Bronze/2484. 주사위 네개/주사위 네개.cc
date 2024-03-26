#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned long long test_case, result[1000] = { 0 }, num;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        bool dou = false;
        int arr[6] = { 0 };
        for (int j = 0; j < 4; j++)
        {
            cin >> num;
            arr[num - 1]++;
        }
        for (int k = 0; k < 6; k++)
        {
            if (arr[k] == 4) {
                result[i] = 50000 + (k + 1) * 5000;
                break;
            }
            else if (arr[k] == 3) {
                result[i] = 10000 + (k + 1) * 1000;
                break;
            }
            else if (arr[k] == 2) {
                for (int r = k + 1; r < 6; r++) {
                    if (arr[r] == 2) {
                        if (result[i] < 2000 + (k + 1) * 500 + (r + 1) * 500) {
                            result[i] = 2000 + (k + 1) * 500 + (r + 1) * 500;
                            dou = true;
                        }
                    }
                }
                if (!dou) {
                    result[i] = 1000 + (k + 1) * 100;
                }
            }
            else if(arr[k] == 1){
                if (result[i] < (k + 1) * 100) {
                    result[i] = (k + 1) * 100;
                }
            }
        }
    }
    sort(result, result + test_case, greater<unsigned long long>());
    cout << result[0];
}