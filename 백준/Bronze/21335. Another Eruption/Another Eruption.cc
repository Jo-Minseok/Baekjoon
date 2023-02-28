#include <iostream>
#include <cmath>
#define PI 3.14159265359
using namespace std;
int main() {
	long long circle;
	cin >> circle;
	printf("%.9f", sqrt(circle / PI) * 2 * PI);
}