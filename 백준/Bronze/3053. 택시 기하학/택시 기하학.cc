#include <iostream>
#define PI 3.1415926535897932
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	double radius;
	cin >> radius;
	printf("%.6f\n",radius * radius * PI);
	printf("%.6f\n", radius * radius *2);
}