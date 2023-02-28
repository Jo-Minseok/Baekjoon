#include <iostream>
using namespace std;
int main() {
	double arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	double a = 0.229 * 0.324;
	double b = 0.297 * 0.42;
	double c = 0.21 * 0.297;
	double total = arr[0] * a*2 + arr[1] * b*2 + arr[2] * c;
	printf("%.6f", total);
}