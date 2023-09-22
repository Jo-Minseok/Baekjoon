#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cir_count, num, max = 0,index = 0;
	cin >> cir_count;
	for (int j = 0; j < 9;j++) {
		for (int i = 0; i < cir_count; i++) {
			cin >> num;
			if (num > max) {
				max = num;
				index = j;
			}
		}
	}
	switch (index)
	{
	case 0:
		cout << "PROBRAIN";
		break;
	case 1:
		cout << "GROW";
		break;
	case 2:
		cout << "ARGOS";
		break;
	case 3:
		cout << "ADMIN";
		break;
	case 4:
		cout << "ANT";
		break;
	case 5:
		cout << "MOTION";
		break;
	case 6:
		cout << "SPG";
		break;
	case 7:
		cout << "COMON";
		break;
	case 8:
		cout << "ALMIGHTY";
		break;
	default:
		break;
	}

}