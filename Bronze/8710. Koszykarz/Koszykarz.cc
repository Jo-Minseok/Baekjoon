#include <iostream>
using namespace std;
int main() {
	unsigned int k_length, t_length, grow;
	cin >> k_length >> t_length >> grow;
	if ((t_length - k_length)%grow==0) {
		cout << (t_length - k_length) / grow;
	}
	else {
		cout << (t_length - k_length) / grow + 1;
	}
}