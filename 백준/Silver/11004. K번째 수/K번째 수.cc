#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int num_count,location,num;
	vector<int> list;
	cin >> num_count >> location;
	for (int i = 1; i <= num_count; i++) {
		cin >> num;
		list.push_back(num);
	}
	sort(list.begin(), list.end());
	cout << list[location - 1];	
}