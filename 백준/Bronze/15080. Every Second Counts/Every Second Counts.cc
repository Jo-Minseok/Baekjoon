#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
	int time[3];
	int time2[3];
	scanf("%d : %d : %d", &time[0], &time[1], &time[2]);
	scanf("%d : %d : %d", &time2[0], &time2[1], &time2[2]);
	int total_time = time[0] * 3600 + time[1] * 60 + time[2];
	int total_time2 = time2[0] * 3600 + time2[1] * 60 + time2[2];
	if (total_time < total_time2) {
		cout << total_time2 - total_time;
	}
	else {
		cout << total_time2 - total_time + 24 * 3600;
	}
}