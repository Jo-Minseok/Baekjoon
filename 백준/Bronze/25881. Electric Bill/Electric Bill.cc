#include <iostream>
using namespace std;
int main() {
	int origin, plus, count,use;
	cin >> origin >> plus;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> use;
		if (use <= 1000) {
			cout << use << " " << use*origin << endl;
		}
		else {
			cout << use << " " << 1000*origin + (use - 1000) * plus << endl;
		}	
	}
}