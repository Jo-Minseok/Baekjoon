#include <iostream>
#define PI 3.1415927

using namespace std;
int main() {
	double wheel_length, wheel_count, time;
	for(int i=1;;i++) {
		cin >> wheel_length >> wheel_count >> time;
		if (wheel_count == 0) {
			break;
		}
		printf("Trip #%d: %.2f %.2f\n",i, wheel_length*PI*wheel_count/(5280*12), wheel_length * PI * wheel_count / (5280 * 12) / (time / 3600));
	}
}