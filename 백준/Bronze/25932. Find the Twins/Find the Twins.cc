#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int num, num2, Mack=0, Zack = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		Zack = 0; Mack = 0;
		for (int j = 0; j < 10; j++) {
			cin >> num2;
			cout << num2 << " ";
			if (num2 == 18) {
				Mack = 1;
			}
			else if (num2 == 17) {
				Zack = 1;
			}
		}
		if (Mack && Zack) {
			cout << "\nboth\n\n";
		}
		else if (Mack == 1) {
			cout << "\nmack\n\n";
		}
		else if(Zack ==1) {
			cout << "\nzack\n\n";
		}
		else {
			cout << "\nnone\n\n";
		}
	}
}