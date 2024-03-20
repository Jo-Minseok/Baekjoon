#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_count;
	cin >> test_count;
	
	for (int i = 0; i < test_count; i++) {
		for (int j = test_count; j>i+1;j--){
			cout << " ";
		}
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
}