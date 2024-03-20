#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case, num, A_N, B_N;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        int result = 0;
        vector<int> A, B;
        cin >> A_N >> B_N;
        for (int j = 0; j < A_N; j++)
        {
            cin >> num;
            A.push_back(num);
        }
        for (int j = 0; j < B_N; j++)
        {
            cin >> num;
            B.push_back(num);
        }
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < B.size(); j++)
            {
                if (A[i] > B[j])
                {
                    result++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << result << "\n";
    }
}