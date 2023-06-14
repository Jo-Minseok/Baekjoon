#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string text;
    while (true)
    {

        cin >> text;

        if (text == "end")
        {
            break;
        }

        bool result = true, gather = false;
        char tmp = ' ';
        int count = 0, gather_count = 0, other_count = 0;

        for (int i = 0; i < text.length(); i++)
        {

            // 같은 글자가 연속적으로 올 경우
            if (tmp == text[i])
            {
                // 세번 올 경우
                if (count == 1)
                {
                    result = false;
                    break;
                }
                // ee와 oo는 허용함.
                if (text[i] == 'e' || text[i] == 'o')
                {
                    count++;
                }
                // ee와 oo를 제외한 글자는 연속적으로 두번 오면 안됨.
                else
                {
                    result = false;
                    break;
                }
            }

            // 연속 안될 경우
            else
            {
                count = 0;
                switch (text[i])
                {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    other_count = 0;
                    gather_count++;
                    // 1. 모음 반드시 포함
                    gather = true;
                    break;
                default:
                    other_count++;
                    gather_count = 0;
                }
                // 2. 모음이 3개 혹은 자음이 3개 연속 X
                if (other_count == 3 || gather_count == 3)
                {
                    result = false;
                    break;
                }
                tmp = text[i];
            }
        }

        cout << "<" << text << "> ";

        if (result && gather)
        {
            cout << "is acceptable.\n";
        }
        else
        {
            cout << "is not acceptable.\n";
        }
    }
}