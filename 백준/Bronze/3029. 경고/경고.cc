#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
int main() {
	int hour, minute, second,hour2,minute2,second2;
	scanf("%d:%d:%d", &hour, &minute, &second);
	scanf("%d:%d:%d", &hour2, &minute2, &second2);
	if (hour == hour2 && minute == minute2 && second == second2) {
		cout << 24 << ":00:00";
		return 0;
	}
	int total_1sec = hour * 3600 + minute * 60 + second;
	int total_2sec = hour2 * 3600 + minute2 * 60 + second2;
	if (total_1sec > total_2sec) {
		total_2sec += 24 * 60 * 60;
	}
	int result_hour = (total_2sec - total_1sec) / 3600;
	int result_min = (total_2sec - total_1sec) / 60 % 60;
	int result_sec = (total_2sec - total_1sec) % 60;
	string h = to_string(result_hour);
	string m = to_string(result_min);
	string s = to_string(result_sec);
	if (h.length() == 1) {
		h = "0" + h;
	}
	if (m.length() == 1) {
		m = "0" + m;
	}
	if (s.length() == 1) {
		s = "0" + s;
	}
	cout << h << ":" << m << ":" << s;
}