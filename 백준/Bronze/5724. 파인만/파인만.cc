#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int num;
	int result;
	while (true) {
		result = 0;
		cin >> num;
		if (num == 0) {
			break;
		}
		for (int i = num; i >=1;i--){
			result += pow(i, 2);
		}
		cout << result << "\n";
	}
}