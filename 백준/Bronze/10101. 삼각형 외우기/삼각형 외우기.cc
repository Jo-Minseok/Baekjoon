#include <iostream>

using namespace std;

int main() {
	int first, second, third;
	cin >> first;
	cin >> second;
	cin >> third;

	if (first + second + third == 180) {
		if (first == 60 && second == 60 && third == 60) {
			cout << "Equilateral" << endl;
		}
		else if (first == second || first == third || second == third) {
			cout << "Isosceles" << endl;
		}
		else {
			cout << "Scalene" << endl;
		}
	}
	else {
		cout << "Error" << endl;
	}

}