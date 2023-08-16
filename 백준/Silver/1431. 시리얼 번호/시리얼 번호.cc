#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool comp(string a, string b)
{
    if (a.length() < b.length())
    {
        return true;
    }
    else if (a.length() == b.length()) {
        int a_num = 0, b_num = 0;
        for (auto c : a) {
            if (isdigit(c)) {
                a_num += c-'0';
            }
        }
        for (auto c : b) {
            if (isdigit(c)) {
                b_num += c - '0';
            }
        }
        if (a_num < b_num) {
            return true;
        }
        else if (a_num == b_num) {
            return a < b;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case;
    vector<string> text_list;
    string text;
    cin >> test_case;
    while (test_case--)
    {
        cin >> text;
        text_list.push_back(text);
    }
    sort(text_list.begin(), text_list.end(), comp);
    for (auto s : text_list)
    {
        cout << s << '\n';
    }
}