#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	if(num%2==0){
		cout << (num / 2 + 1) * (num / 2 + 1);
	}
	else {
		cout << (num / 2 + 1) * (num / 2 + 2);
	}
}