#include <iostream> 
using namespace std;
int main() {
	int atob, btoc, time;
	cin >> atob >> btoc >> time;
	if ((atob * 60 + btoc * 60) < (time * 60 + 30)) {
		cout << 1;
	}
	else {
		cout << 0;
	}
}