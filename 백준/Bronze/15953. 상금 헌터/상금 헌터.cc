#include <iostream>
using namespace std;
int main() {
	int arr1[22] = { 0,500,300,300,200,200,200,50,50,50,50,30,30,30,30,30,10,10,10,10,10,10 };
	int arr2[32] = { 0,512,256,256,128,128,128,128,64,64,64,64,64,64,64,64,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32 };
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case, num1, num2, result = 0;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		result = 0;
		cin >> num1 >> num2;
		if (num1 <= 21 && num2 <= 31) {
			result += arr1[num1] + arr2[num2];
		}
		else if (num1 > 21 && num2 <= 31) {
			result += arr2[num2];
		}
		else if (num1 <= 21 && num2 > 31) {
			result += arr1[num1];
		}
		cout << result * 10000 << "\n";
	}
}