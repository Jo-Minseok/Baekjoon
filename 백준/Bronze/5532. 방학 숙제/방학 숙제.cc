#include <iostream>

using namespace std;

int main() {
	int day, math, korea, korea_max, math_max,result=0;
	int korea_day, math_day;
	cin >> day >> korea >> math >> korea_max >> math_max;
	if (korea % korea_max!=0) {
		korea_day=korea / korea_max + 1;
	}
	else {
		korea_day=korea / korea_max;
	}
	if (math % math_max != 0) {
		math_day= math / math_max + 1;
	}
	else {
		math_day= math / math_max;
	}
	if (math_day >= korea_day) {
		cout << day - math_day;
	}
	else {
		cout << day - korea_day;
	}
}