#include <iostream> 
using namespace std;
int main() {
	int s, m, l;
	cin >> s >> m >> l;
	cout << ((1 * s + 2 * m + 3 * l >= 10) ? "happy" : "sad");
}