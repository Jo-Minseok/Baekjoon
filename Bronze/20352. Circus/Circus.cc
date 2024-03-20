#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double area;
	double PI = 3.141592653589793238462643383;
	cin >> area;
	printf("%.10f",(sqrt(area /PI)) * 2 * PI);
}