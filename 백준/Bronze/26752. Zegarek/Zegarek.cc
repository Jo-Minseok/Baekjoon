#include <iostream>
using namespace std;
int main() {
	int hour, minute, second;
	cin >> hour >> minute >> second;
	second += 1;
	if (second >= 60) {
		minute += second / 60;
		second %= 60;
	}
	if (minute >= 60) {
		hour += minute / 60;
		minute %= 60;
	}
	if (hour >= 24) {
		hour %= 24;
	}
	if (hour < 10) {
		if (minute < 10) {
			if (second < 10) {
				cout << "0" << hour << ":" << "0" << minute << ":" << "0" << second;
			}
			else {
				cout << "0" << hour << ":" << "0" << minute << ":" << second;
			}
		}
		else {
			if (second < 10) {
				cout << "0" << hour << ":" << minute << ":" << "0" << second;
			}
			else {
				cout << "0" << hour << ":" << minute << ":" << second;
			}
		}
	}
	else {
		if (minute < 10) {
			if (second < 10) {
				cout << hour << ":" << "0" << minute << ":" << "0" << second;
			}
			else {
				cout << hour << ":" << "0" << minute << ":" << second;
			}
		}
		else {
			if (second < 10) {
				cout << hour << ":" << minute << ":" << "0" << second;
			}
			else {
				cout << hour << ":" << minute << ":" << second;
			}
		}
	}
}