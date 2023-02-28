#include <iostream>
using namespace std;
int main() {
	int first_year;
	int last_year;
	cin >> first_year;
	cin >> last_year;
	while (true) {
		cout << "All positions change in year " << first_year << "\n";
		first_year += 60;
		if (first_year > last_year) {
			break;
		}
	}
}