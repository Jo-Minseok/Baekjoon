#include <iostream>
#include <map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int A_size, B_size,num;
	map<int, bool> list;
	cin >> A_size >> B_size;
	for (int i = 0; i < A_size + B_size;i++) {
		cin >> num;
		if (!list[num]) {
			list[num] = true;
		}
		else {
			list.erase(num);
		}
	}
	cout << list.size();
}