#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int count;
	cin >> count;
	int total = 0;
	double** arr = new double*[count];
	for (int i = 0; i < count; i++) {
		total = 0;
		arr[i] = new double[7];
		for (int j = 0; j < 7; j++) {
			cin >> arr[i][j];
			switch (j)
			{
			case 0:
				arr[i][j] = 9.23076 * pow(26.7 - arr[i][j], 1.835);
				break;
			case 1:
				arr[i][j] = 1.84523 * pow((arr[i][j] - 75),1.348);
				break;
			case 2:
				arr[i][j] = 56.0211 * pow((arr[i][j] - 1.5), 1.05);
				break;
			case 3:
				arr[i][j] = 4.99087 * pow(42.5 - arr[i][j], 1.81);
				break;
			case 4:
				arr[i][j] = 0.188807 * pow((arr[i][j] - 210), 1.41);
				break;
			case 5:
				arr[i][j] = 15.9803 * pow((arr[i][j] - 3.8), 1.04);
				break;
			case 6:
				arr[i][j] = 0.11193 * pow(254 - arr[i][j], 1.88);
				break;
			}
			total += (int)arr[i][j];
		}
		cout << total << "\n";
	}
}