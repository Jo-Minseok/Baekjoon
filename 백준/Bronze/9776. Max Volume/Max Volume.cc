#include <iostream>
#define PI 3.14159
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case;
	cin >> test_case;
	string type;
	double r, h,tmp;
	double max = 0;
	for (int i = 0; i < test_case; i++) {
		cin >> type >> r;
		if (type == "S") {
			tmp = 4*PI*r*r*r/3;
		}
		else if (type == "C") {
			cin >> h;
			tmp =PI*r*r*h/3;
		}
		else if (type == "L") {
			cin >> h;
			tmp = PI*r*r*h;
		}
		if (max < tmp) {
			max = tmp;
		}
	}
	printf("%.3f", max);
}