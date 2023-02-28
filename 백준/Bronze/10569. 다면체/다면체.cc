#include <iostream>
using namespace std;
int main() {
	int count;
	int edge, vertex;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> vertex >> edge;
		cout << 2 - vertex + edge << "\n";
	}
}