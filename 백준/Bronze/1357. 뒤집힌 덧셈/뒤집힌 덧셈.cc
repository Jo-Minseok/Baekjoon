#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string text1, text2;
    cin >> text1 >> text2;
    reverse(text1.begin(), text1.end());
    reverse(text2.begin(), text2.end());
    int Rev_X = stoi(text1);
    int Rev_Y = stoi(text2);
    int result = Rev_X + Rev_Y;
    string result_text = to_string(result);
    reverse(result_text.begin(), result_text.end());
    result = stoi(result_text);
    cout << result;
}