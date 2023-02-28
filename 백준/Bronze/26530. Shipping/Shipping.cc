#include <iostream>
using namespace std;
int main() {
	int count;
	int data;
	string name;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> data;
		double result = 0;
		int* items = new int[data];
		double* prices = new double[data];
		for (int j = 0; j < data; j++) {
			cin >> name >> items[i] >> prices[i];
			result += items[i] * prices[i];
		}
		printf("$%.2f\n",result);
	}
}