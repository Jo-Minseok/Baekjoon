#include <iostream>
using namespace std;
int main() {
	int data;
	cin >> data;
	double length1, length2;
	for (int i = 0; i < data; i++) {
		cin >> length1 >> length2;
		printf("%.1f\n",(length1 > length2 ? length1 - length2 : length2 - length1));
	}
}