#include <iostream>
using namespace std;
int main() {
	double num[3];
	cin >> num[0] >> num[1] >> num[2];
	if ((num[0] * num[1] / num[2]) > (num[0] / num[1] * num[2])) {
		printf("%d",(int)(num[0] * num[1] / num[2]));
	}
	else {
		cout.precision(1);
		printf("%d", (int)(num[0] / num[1] * num[2]));
	}
}