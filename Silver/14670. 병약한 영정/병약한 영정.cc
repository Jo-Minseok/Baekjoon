#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
	int medicine_count;
	int medicine_effect, medicine_name;
	map<int, int> medicine_list;
	bool check;
	cin >> medicine_count;
	for (int i = 0; i < medicine_count; i++) {
		cin >> medicine_effect >> medicine_name;
		medicine_list[medicine_effect] =  medicine_name;
	}
	int ill_count,count, ill_name;
	cin >> ill_count;
	for (int i = 0; i < ill_count; i++) {
		cin >> count;
		check = true;
		vector<int> vc;
		for (int j = 0; j < count; j++) {
			cin >> ill_name;
			if (medicine_list.count(ill_name) != 0) {
				vc.push_back(medicine_list[ill_name]);
			}
			else {
				check = false;
			}
		}
		if (!check) {
			cout << "YOU DIED";
		}
		else {
			for (auto i : vc) {
				cout << i << " ";
			}
		}
		cout << "\n";
	}
}