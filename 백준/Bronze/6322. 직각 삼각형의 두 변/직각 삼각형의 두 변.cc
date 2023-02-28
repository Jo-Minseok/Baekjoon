#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int first, second, third;
	int i = 1;
	while (true) {
		cin >> first >> second >> third;
		if (first == 0 && second == 0 && third == 0) {
			break;
		}
		cout << "Triangle #" << i << "\n";
		if (first == -1) {
			if (pow(third, 2) - pow(second, 2) > 0) {
				printf("a = %.3f\n\n",sqrt(pow(third, 2) - pow(second, 2)));
			}
			else {
				cout << "Impossible.\n\n";
			}
		}
		else if (second == -1) {
			if (pow(third, 2) - pow(first, 2) > 0) {
				printf("b = %.3f\n\n",sqrt(pow(third, 2) - pow(first, 2)));
			}
			else {
				cout << "Impossible.\n\n";
			}
		}
		else {
			printf("c = %.3f\n\n",sqrt(pow(first, 2) + pow(second, 2)));
		}
		i++;
	}
}