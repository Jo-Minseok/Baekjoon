#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int num[3] = { 0 };
	string a;
	for (int i = 0; i < 3; i++){
		cin >> num[i];
	}
	sort(num, num + 3);
	cin >> a;
	for (int i = 0; i < 3; i++) {
		switch (a[i])
		{
		case 'A':
			cout << num[0];
			break;
		case 'B':
			cout << num[1];
			break;
		case 'C':
			cout << num[2];
			break;
		}
		cout << " ";
	}
}