#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int count,i,j;
	int num;
	int arr[10001] = { 0 };
	cin >> count;
	for (i = 0; i < count; i++) {
		cin >> num;
		arr[num]+=1;
	}
	for (i = 1; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i << "\n";
		}
	}
}