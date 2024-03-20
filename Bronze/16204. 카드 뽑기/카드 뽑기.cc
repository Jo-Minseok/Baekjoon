#include <iostream>
using namespace std;
int main() {
	int cardCount, CircleCard, backCircle;
	int result = 0;
	cin >> cardCount >> CircleCard >> backCircle;
	int xCard = cardCount - CircleCard;
	int backxCard = cardCount - backCircle;
	if (CircleCard == backCircle) {
		cout << cardCount;
	}
	else if (CircleCard > backCircle) {
		cout << backCircle + xCard;
	}
	else {
		cout << CircleCard + backxCard;
	}
}