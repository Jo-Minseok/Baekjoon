//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//<<<<<<< HEAD
//#include <string.h>
//#include <unordered_map>
//#include <vector>
//
//=======
//#include <string>
//#include <vector>
//#include <algorithm>
//>>>>>>> main
//using namespace std;
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//<<<<<<< HEAD
//int main() {
//    unordered_map<string, int> list = { {"January",31}, {"February",28}, {"March",31},{"April",30}, {"May",31},{"June",30},{"July",31},{"August",31},{"September",30},{"October",31},{"November",30},{"December",31} };
//    int year, day, hour, minute;
//    char month[10];
//    unsigned long long total_date = 0, max_date;
//    scanf("%s %d, %d %d:%d", month, &day, &year, &hour, &minute);
//    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
//        max_date = 366 * 24 * 60 * 60;
//        list["February"] = 29;
//    }
//    else {
//        max_date = 365 * 24 * 60 * 60;
//    }
//    vector<pair<string, int>>list2(list.begin(), list.end());
//    for (auto i : list2) {
//        if (strcmp(i.first,month)) {
//            break;
//        }
//        total_date += i.second * 60 * 60;
//    }
//    total_date += day * 60 * 60 + hour * 60 * 60 + minute * 60;
//    cout << (1.0 * total_date / max_date) * 100;
//=======
//	int num1, num2;
//	cin >> num1 >> num2;
//	vector<string> list;
//	for (int i = 1; i <= num2; i++) {
//		string result = to_string(num1 * i);
//		reverse(result.begin(), result.end());
//		list.push_back(result);
//	}
//	int max = 0;
//	for (auto i : list) {
//		if (stoi(i) > max) {
//			max = stoi(i);
//		}
//	}
//	cout << max;
//>>>>>>> main
//}

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a = "ABC", b = "BABC", c = "CCAABB";
    int Problem;
    int score[3] = { 0 };
    string text;
    cin >> Problem >> text;
    for (int i = 0, a_index = 0, b_index = 0, c_index = 0; i < text.length(); i++, a_index++, b_index++, c_index++) {
        a_index = a_index % a.length();
        b_index = b_index % b.length();
        c_index = c_index % c.length();
        if (text[i] == a[a_index]) {
            score[0]++;
        }
        if (text[i] == b[b_index]) {
            score[1]++;
        }
        if (text[i] == c[c_index]) {
            score[2]++;
        }
    }
    int max = *max_element(score, &score[3]);
    cout << max << "\n";
    if (max == 0) {
        return 0;
    }
    for (int i = 0; i < 3; i++) {
        if (max == score[i]) {
            switch (i)
            {
            case 0:
                cout << "Adrian\n";
                break;
            case 1:
                cout << "Bruno\n";
                break;
            case 2:
                cout << "Goran\n";
                break;
            default:
                break;
            }
        }
    }
}