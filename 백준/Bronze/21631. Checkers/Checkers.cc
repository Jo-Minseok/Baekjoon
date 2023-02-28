#include <iostream>
using namespace std;
int main() {
	unsigned long long C, B;
	cin >> C >> B;
	if (C < B) {
		cout << C +1;
	}
	else if(C>=B){
		cout << B;
	}
}