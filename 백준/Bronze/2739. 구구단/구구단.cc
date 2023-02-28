#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	for(int j = 1; j <= 9; j++){
		cout << num << " * " << j << " = " << num * j << endl;
	}
}