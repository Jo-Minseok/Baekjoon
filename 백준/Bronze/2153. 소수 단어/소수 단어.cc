#include <iostream>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a;
	int num = 0,count =0;
	cin >> a;
	for (auto c : a) {
		if (islower(c)) {
			num += c - 'a'+1;
		}
		else {
			num += c - 'A' + 27;
		}
	}
	for (int i = 1; i <= sqrt(num); i++) {
		if (num % i == 0) {
			count++;
		}
	}
	cout << (count == 1 ? "It is a prime word." : "It is not a prime word.");
}