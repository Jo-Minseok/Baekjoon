#include <iostream>
#include <string>
using namespace std;
int main() {
	int  i = 0;
	string a;
	while (getline(cin,a)) {
		i++;
	}
	cout << i;
}