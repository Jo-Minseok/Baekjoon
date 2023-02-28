#include <iostream>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int needPencil;
	double pencilX, priceX;
	double pencilY, priceY;
	cin >> needPencil >> pencilX >> priceX >> pencilY >> priceY;
	cout << (ceil(needPencil / pencilX) * priceX > ceil(needPencil / pencilY) * priceY ? ceil(needPencil / pencilY) * priceY : ceil(needPencil / pencilX) * priceX);
}