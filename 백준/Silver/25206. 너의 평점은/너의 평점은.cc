#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
	string sub;
	double score;
	string grade;
	int count = 0;
	double total = 0;
	double total_grade = 0;
	while (cin >> sub) {
		cin >> score >> grade;
		if (grade == "A+") {
			total += score * 4.5;
			total_grade += score;
		}
		else if (grade == "A0") {
			total += score * 4.0;
			total_grade += score;
		}
		else if (grade == "B+") {
			total += score * 3.5;
			total_grade += score;
		}
		else if (grade == "B0") {
			total += score * 3.0;
			total_grade += score;
		}
		else if (grade == "C+") {
			total += score * 2.5;
			total_grade += score;
		}
		else if (grade == "C0") {
			total += score * 2.0;
			total_grade += score;
		}
		else if (grade == "D+") {
			total += score * 1.5;
			total_grade += score;
		}
		else if (grade == "D0") {
			total += score * 1.0;
			total_grade += score;
		}
		else if (grade == "P") {
			continue;
		}
		else if (grade == "F") {
			total += score * 0.0;
			total_grade += score;
		}
	}
	printf("%.6f", total / total_grade);
}