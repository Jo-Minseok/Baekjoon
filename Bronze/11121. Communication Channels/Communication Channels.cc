#include <iostream>
using namespace std;
int main() {
	int count = 0;
	string a, b;
	cin >> count;
	for (int i = 0; i < count; i++){
		cin >> a >> b;
		if (a == b) {
			cout << "OK"<<endl;
		}
		else {
			cout << "ERROR" << endl;
		}
	}
}