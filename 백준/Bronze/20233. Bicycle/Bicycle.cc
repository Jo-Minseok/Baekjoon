#include <iostream>
using namespace std;
struct price {
	int monthPrice;
	int plusPrice;
};
int main() {
	struct price price[2];
	int time;
	int a, b;
	cin >> price[0].monthPrice >> price[0].plusPrice >> price[1].monthPrice >> price[1].plusPrice >> time;
	if (time <= 30) {
		cout << price[0].monthPrice;
	}
	else {
		cout << price[0].monthPrice + price[0].plusPrice * (time - 30) * 21;
	}
	cout << " ";
	if (time <= 45) {
		cout << price[1].monthPrice;
	}
	else {
		cout << price[1].monthPrice + price[1].plusPrice * (time - 45) * 21;
	}
}