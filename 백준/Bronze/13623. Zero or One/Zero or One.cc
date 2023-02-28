#include <iostream>
using namespace std;
int main() {
	int i, zero = 0, one = 0, one_result_index = 0,zero_result_index=0;
	char input[3];
	cin >> input[0] >> input[1] >> input[2];
	for (int i = 0; i < 3; i++) {
		if (input[i] == '1') {
			one++;
			one_result_index = i;
		}
		else {
			zero++;
			zero_result_index = i;
		}
	}
	if(zero == 1 && one == 2){
		switch (zero_result_index) {
		case 0:
			cout << "A";
			break;
		case 1:
			cout << "B";
			break;
		case 2:
			cout << "C";
			break;
		}
	}
	else if (zero == 2 && one == 1) {
		switch (one_result_index) {
		case 0:
			cout << "A";
			break;
		case 1:
			cout << "B";
			break;
		case 2:
			cout << "C";
			break;
		}
	}
	else {
		cout << "*";
	}
}