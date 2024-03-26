#include <iostream>
using namespace std;
int main() {
	int speed, fly_speed, distance;
	cin >> speed >> fly_speed >> distance;
	cout << distance / speed / 2 * fly_speed;
}