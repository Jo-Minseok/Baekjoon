#include <iostream>
using namespace std;
string month_list[] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
int main() {
	int num;
	int* arr;
	int day, month, year;
	int index = 1;
	while (true) {
		cin >> num;
		arr = new int[12] {0};
		if (num == 0) {
			break;
		}
		for (int i = 0; i < num; i++) {
			cin >> day >> month >> year;
			arr[month - 1]++;
		}
		cout << "Case #" << index << ":\n";
		for (int i = 0; i < 12; i++) {
			cout << month_list[i] << ":";
			for (int j = 0; j < arr[i]; j++) {
				cout << "*";
			}
			cout << "\n";
		}
		index++;
	}
}