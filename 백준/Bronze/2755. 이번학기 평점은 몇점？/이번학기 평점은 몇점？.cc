#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout.precision(2);
    cout << fixed;
    int test_case;
    double score_sum = 0, grade_sum = 0, score_int;
    string sub, score;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        cin >> sub >> score_int >> score;
        grade_sum += score_int;
        if (score == "A+")
        {
            score_sum += 4.3 * score_int;
        }
        else if (score == "A0")
        {
            score_sum += 4.0 * score_int;
        }
        else if (score == "A-")
        {
            score_sum += 3.7 * score_int;
        }
        else if (score == "B+")
        {
            score_sum += 3.3 * score_int;
        }
        else if (score == "B0")
        {
            score_sum += 3.0 * score_int;
        }
        else if (score == "B-")
        {
            score_sum += 2.7 * score_int;
        }
        else if (score == "C+")
        {
            score_sum += 2.3 * score_int;
        }
        else if (score == "C0")
        {
            score_sum += 2.0 * score_int;
        }
        else if (score == "C-")
        {
            score_sum += 1.7 * score_int;
        }
        else if (score == "D+")
        {
            score_sum += 1.3 * score_int;
        }
        else if (score == "D0")
        {
            score_sum += 1.0 * score_int;
        }
        else if (score == "D-")
        {
            score_sum += 0.7 * score_int;
        }
    }

    double result = score_sum / grade_sum;
    result *= 100;
    result = round(result);
    cout << result / 100;
}