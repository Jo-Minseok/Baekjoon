#include <iostream>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int num_count,num;
	cin >> num_count;
	stack<int> list;
	for (int i = 0; i < num_count; i++) {
		cin >> num;
		if (list.empty()) {
			list.push(num);
			continue;
		}
		while (true) {
			if (!list.empty() && num >= list.top()) {
				list.pop();
			}
			else if(!list.empty()&&num < list.top()){
				list.push(num);
				break;
			}
			else {
				list.push(num);
				break;
			}
		}
	}
	cout << list.size();
}