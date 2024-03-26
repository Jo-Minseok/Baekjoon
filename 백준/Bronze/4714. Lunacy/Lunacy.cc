#include <iostream>

using namespace std;

int main() {
	double weight;
	while (1) {
		cin >> weight;
		if (weight>0) {
			printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n",weight,weight*0.167);
		}
		else {
			break;
		}
	}
}