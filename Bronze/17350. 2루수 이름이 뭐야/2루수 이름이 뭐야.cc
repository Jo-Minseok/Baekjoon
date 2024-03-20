#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	bool check = false;
	string* list = new string[count];
	for (int i = 0; i < count; i++) {
		cin >> list[i];
		if (list[i] == "anj" || list[i] ==  "ANJ") {
			check = true;
		}
	}
	if (check) {
		cout << "뭐야;";
	}
	else {
		cout << "뭐야?";
	}
}