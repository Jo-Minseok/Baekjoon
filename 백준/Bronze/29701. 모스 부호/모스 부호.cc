#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    string text, tmp;
    cin >> num;
    cin.ignore();
    getline(cin, text);
    stringstream ss(text);
    while (ss >> tmp)
    {
        if (tmp == ".-")
        {
            cout << "A";
        }
        else if (tmp == "-...")
        {
            cout << "B";
        }
        else if (tmp == "-.-.")
        {
            cout << "C";
        }
        else if (tmp == "-..")
        {
            cout << "D";
        }
        else if (tmp == ".")
        {
            cout << "E";
        }
        else if (tmp == "..-.")
        {
            cout << "F";
        }
        else if (tmp == "--.")
        {
            cout << "G";
        }
        else if (tmp == "....")
        {
            cout << "H";
        }
        else if (tmp == "..")
        {
            cout << "I";
        }
        else if (tmp == ".---")
        {
            cout << "J";
        }
        else if (tmp == "-.-")
        {
            cout << "K";
        }
        else if (tmp == ".-..")
        {
            cout << "L";
        }
        else if (tmp == "--")
        {
            cout << "M";
        }
        else if (tmp == "-.")
        {
            cout << "N";
        }
        else if (tmp == "---")
        {
            cout << "O";
        }
        else if (tmp == ".--.")
        {
            cout << "P";
        }
        else if (tmp == "--.-")
        {
            cout << "Q";
        }
        else if (tmp == ".-.")
        {
            cout << "R";
        }
        else if (tmp == "...")
        {
            cout << "S";
        }
        else if (tmp == "-")
        {
            cout << "T";
        }
        else if (tmp == "..-")
        {
            cout << "U";
        }
        else if (tmp == "...-")
        {
            cout << "V";
        }
        else if (tmp == ".--")
        {
            cout << "W";
        }
        else if (tmp == "-..-")
        {
            cout << "X";
        }
        else if (tmp == "-.--")
        {
            cout << "Y";
        }
        else if (tmp == "--..")
        {
            cout << "Z";
        }
        else if (tmp == ".----")
        {
            cout << "1";
        }
        else if (tmp == "..---")
        {
            cout << "2";
        }
        else if (tmp == "...--")
        {
            cout << "3";
        }
        else if (tmp == "....-")
        {
            cout << "4";
        }
        else if (tmp == ".....")
        {
            cout << "5";
        }
        else if (tmp == "-....")
        {
            cout << "6";
        }
        else if (tmp == "--...")
        {
            cout << "7";
        }
        else if (tmp == "---..")
        {
            cout << "8";
        }
        else if (tmp == "----.")
        {
            cout << "9";
        }
        else if (tmp == "-----")
        {
            cout << "0";
        }
        else if (tmp == ".-.-.-")
        {
            cout << ".";
        }
        else if (tmp == "--..--")
        {
            cout << ",";
        }
        else if (tmp == "..--..")
        {
            cout << "?";
        }
        else if (tmp == "---...")
        {
            cout << ":";
        }
        else if (tmp == "-....-")
        {
            cout << "-";
        }
        else if (tmp == ".--.-.")
        {
            cout << "@";
        }

    } // namespace
}