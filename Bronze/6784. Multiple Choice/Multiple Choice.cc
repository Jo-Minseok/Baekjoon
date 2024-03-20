#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int count,result =0;
	cin >> count;
	char* arr = new char[count];
	char* answer = new char[count];
	for (int i = 0; i < count; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < count; i++) {
		cin >> answer[i];
		if (arr[i] == answer[i]) {
			result++;
		}
	}
	cout << result;
}