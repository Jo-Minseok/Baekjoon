#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef struct {
	string name;
	int day;
	int month;
	int year;
}information;

bool cmp(information first, information second) {
	if (first.year < second.year) {
		return true;
	}
	else if (first.year == second.year) {
		if (first.month < second.month) {
			return true;
		}
		else if (first.month == second.month) {
			if (first.day < second.day) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}
int main() {
	int count;
	cin >> count;
	information* list = new information[count];
	for (int i = 0; i < count; i++) {
		cin >> list[i].name >> list[i].day >> list[i].month >> list[i].year;
	}
	sort(list, list + count, cmp);

	cout << list[count-1].name << "\n" << list[0].name;
}