#include <iostream>
using namespace std;
int main() {
	pair<int, int> pos;
	int radius;
	cin >> pos.first >> pos.second;
	cin >> radius;
	cout << pos.first - radius << " " << pos.second + radius << "\n";
	cout << pos.first + radius << " " << pos.second + radius << "\n";
	cout << pos.first + radius << " " << pos.second - radius << "\n";
	cout << pos.first - radius << " " << pos.second - radius << "\n";
}