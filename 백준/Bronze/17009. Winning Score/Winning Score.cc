#include <iostream> 
using namespace std;
int main() {
	int score[6] = { 0 };
	int a=0, b=0;
	for (int i = 0; i < 6; i++) {
		cin >> score[i];
		switch (i) {
		case 0:
			a += score[i] * 3;
			break;
		case 1:
			a += score[i] * 2;
			break;
		case 2:
			a += score[i];
			break;
		case 3:
			b += score[i] * 3;
			break;
		case 4:
			b += score[i] * 2;
			break;
		case 5:
			b += score[i];
			break;
		}
	}
	if (a > b) {
		cout << "A";
	}
	else if (a < b) {
		cout << "B";
	}
	else {
		cout << "T";
	}
}