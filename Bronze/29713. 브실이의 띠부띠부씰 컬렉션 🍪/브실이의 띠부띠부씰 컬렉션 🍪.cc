#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	init();
	
	int num;
	string text;
	cin >> num >> text;
	int arr[10] = { 0 },r = 0, e = 0;
	for (char i : text) {
		switch (i)
		{
		case 'B':
			arr[0]++;
			break;
		case 'R':
			r++;
			if (r == 2) {
				arr[1]++;
				r = 0;
			}
			break;
		case 'O':
			arr[2]++;
			break;
		case 'N':
			arr[3]++;
			break;
		case 'Z':
			arr[4]++;
			break;
		case 'E':
			e++;
			if (e == 2) {
				arr[5]++;
				e = 0;
			}
			break;
		case 'S':
			arr[6]++;
			break;
		case 'I':
			arr[7]++;
			break;
		case 'L':
			arr[8]++;
			break;
		case 'V':
			arr[9]++;
			break;
		}
	}
	cout << *min_element(arr, arr + 10);
}