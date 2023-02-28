#include <iostream>
using namespace std;
int main() {
	int origin_temp, last_temp, freeze_heat_time, defrost_time, heat_time;
	int sec = 0;
	cin >> origin_temp >> last_temp >> freeze_heat_time >> defrost_time >> heat_time;
	if (origin_temp <= 0) {
		sec += origin_temp * freeze_heat_time*-1;
		sec += defrost_time;
		sec += heat_time * last_temp;
	}
	else {
		sec += (last_temp - origin_temp) * heat_time;
	}
	cout << sec;
}