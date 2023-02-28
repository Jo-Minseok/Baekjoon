#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
	int test_case;
	cin >> test_case;
	int num1, num2;
	for (int i = 0; i < test_case; i++) {
		scanf("%d,%d",&num1,&num2);
		cout << num1 + num2 << "\n";

	}
}