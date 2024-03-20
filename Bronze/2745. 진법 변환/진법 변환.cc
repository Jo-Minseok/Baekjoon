#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string arr;
	int sub;
	cin >> arr >> sub;
	int result = 0;
	for (int i = arr.length()-1, j=0; i >= 0; i--,j++) {
		if (isalpha(arr[i])) {
			result += (arr[i] - 'A' + 10) * pow(sub, j);
		}
		else {
			result += (arr[i] - '0') * pow(sub, j);
		}
	}
	cout << result;
}