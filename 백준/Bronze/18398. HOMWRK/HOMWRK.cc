#include <iostream>
using namespace std;
int main() {
	int problem,num,num2,test_case;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		cin >> problem;
		for (int j = 0; j < problem; j++) {
			cin >> num >> num2;
			cout << num + num2 << " " << num * num2 << endl;
		}
	}
}