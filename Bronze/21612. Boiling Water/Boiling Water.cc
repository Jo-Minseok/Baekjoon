#include <iostream>
using namespace std;
int main(){
	int temp, result;
	cin >> temp;
	result = 5 * temp - 400;
	if (result < 100) {
		cout << result << endl << 1;
	}
	else if( result>100){
		cout << result << endl << -1;
	}
	else {
		cout << result << endl << 0;
	}
}