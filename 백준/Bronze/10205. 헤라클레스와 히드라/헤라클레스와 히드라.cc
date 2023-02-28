#include <iostream>
using namespace std;
int main() {
	int count,head;
	string a;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> head >> a;
		for (int i = 0; i < a.length(); i++) {
			if (a[i] == 'b') {
				head--;
			}
			else {
				head++;
			}
		}
		cout << "Data Set " << i + 1 << ":\n";
		cout << head << "\n\n";
	}
}