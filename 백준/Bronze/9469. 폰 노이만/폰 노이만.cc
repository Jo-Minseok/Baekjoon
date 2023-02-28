#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	int num;
	double distance, A, B, FA;
	for (int i = 0; i < count; i++) {
		cin >> num >> distance >> A >> B >> FA;
		printf("%d %.6f\n", num, distance / (A + B) * FA);
	}
}