#include <iostream>
using namespace std;
int main() {
	int result = 0;
	int want_chicken, want_beef, want_pasta;
	int chicken, beef, pasta;
	cin >> chicken >> beef >> pasta;
	cin >> want_chicken >> want_beef >> want_pasta;
	if (chicken < want_chicken) {
		result += want_chicken - chicken;
	}
	if (beef < want_beef) {
		result += want_beef - beef;
	}
	if (pasta < want_pasta) {
		result += want_pasta - pasta;
	}
	cout << result;
}