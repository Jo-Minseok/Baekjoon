#include <iostream> 
using namespace std;
int main() {
	int num[3];
	int one = 0, two = 0;
	for (int i = 0; i < 3; i++) {
		cin >> num[i];
		num[i] == 1 ? one++ : two++;
	}
	cout << (one > two ? "1" : "2");
}