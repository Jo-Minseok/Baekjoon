#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int student_count;
    double sum = 0;
    string input_num;
    cin >> student_count;
    for (int i = 0; i < student_count; i++)
    {
        cin >> input_num;
        for (int i = 0; i < input_num.length(); i++)
        {
            if (input_num[i] == '0' || input_num[i] == '6' || input_num[i] == '9')
                input_num[i] = '9';
        }
        int score = stod(input_num);
        if (score > 100)
            score = 100;
        sum += score;
    }
    cout << round(sum / student_count);
}