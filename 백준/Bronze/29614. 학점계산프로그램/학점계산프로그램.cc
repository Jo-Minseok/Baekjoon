#include <iostream>
using namespace std;

void init() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	init();
	string text;
	double arr[9] = { 0 }, score_count = 0, sum = 0;
	cin >> text;
	for (int i = 0; i < text.length();i++) {
		if (text[i] == 'A') {
			if (text[i + 1] == '+') {
				arr[0]++;
				++i;
			}
			else {
				arr[1]++;
			}
		}
		else if (text[i] == 'B') {
			if (text[i + 1] == '+') {
				arr[2]++;
				++i;
			}
			else {
				arr[3]++;
			}
		}
		else if (text[i] == 'C') {
			if (text[i + 1] == '+') {
				arr[4]++;
				++i;
			}
			else {
				arr[5]++;
			}
		}
		else if (text[i] == 'D') {
			if (text[i + 1] == '+') {
				arr[6]++;
				++i;
			}
			else {
				arr[7]++;
			}
		}
		else if (text[i] == 'F') {
			arr[8]++;
		}
		score_count++;
	}
	for (int i = 0; i < 9; i++) {
		switch (i)
		{
		case 0:
			sum += arr[i] * 4.5;
			break;
		case 1:
			sum += arr[i] * 4.0;
			break;
		case 2:
			sum += arr[i] * 3.5;
			break;
		case 3:
			sum += arr[i] * 3.0;
			break;
		case 4:
			sum += arr[i] * 2.5;
			break;
		case 5:
			sum += arr[i] * 2.0;
			break;
		case 6:
			sum += arr[i] * 1.5;
			break;
		case 7:
			sum += arr[i] * 1.0;
			break;
		default:
			break;
		}
	}
	cout << sum / score_count;
}