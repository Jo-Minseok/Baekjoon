#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int grade;
    int subject;
    double score;
    int grade_subject;
    int total_grade = 0;
    double total_score = 0;
    cin >> grade;
    for (int i = 0; i < grade; i++)
    {
        total_grade = total_score = 0;
        cin >> subject;
        for (int j = 0; j < subject; j++)
        {
            cin >> grade_subject >> score;
            total_grade += grade_subject;
            total_score += score * grade_subject;
        }
        printf("%d %.1f\n", total_grade, total_score / total_grade);
    }
}