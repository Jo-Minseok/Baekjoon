#include <iostream>
using namespace std;
int main() {
	int one[3], two[3];
	for (int i = 0; i < 3; i++) {
		cin >> one[i];
	}
	for (int i = 0; i < 3; i++) {
		cin >> two[i];
	}
	
	if (one[1] > two[1]) {
		cout << two[0] - one[0] - 1 << endl;
	}
	else if (one[1] == two[1]) {
		if(one[2]>two[2]){
			cout << two[0] - one[0]-1 << endl;
		}
		else {
			cout << two[0] - one[0] << endl;
		}
	}
	else {
		cout << two[0] - one[0] << endl;
	}

	cout << two[0] - one[0] + 1 << endl;
	cout << two[0] - one[0];
}