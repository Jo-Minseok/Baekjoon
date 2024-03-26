#include <iostream>
using namespace std;
int main() {
	double per;
	cin >> per;
	printf("%.10f\n%.10f", 100 / per,100 / (100-per));
}