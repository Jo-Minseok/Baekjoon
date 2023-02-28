#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double length;
	double s;
	cin >> length;
	s = length * sqrt(3) * (length/2)/2;
	printf("%.10f",s);
}