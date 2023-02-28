#include <iostream>
using namespace std;
int main() {
	double weight;
	double height;
	cin >> weight >> height;
	double result = weight / (height * height);
	if (result > 25) {
		cout << "Overweight";
	}
	else if (result >= 18.5) {
		cout << "Normal weight";
	}
	else {
		cout << "Underweight";
	}
}