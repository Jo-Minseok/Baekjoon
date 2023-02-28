#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double length1, length2;
	cin >> length1 >> length2;
	printf("%.9f", (length1 + length2) - sqrt(pow(length1, 2) + pow(length2, 2)));
}