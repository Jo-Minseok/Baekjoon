#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	priority_queue<int> pq;

	int candidate_count,result = 0,num,standard = 0;
	cin >> candidate_count >> standard;
	for (int i = 1; i < candidate_count; i++) {
		cin >> num;
		pq.push(num);
	}
	if (pq.empty()) {
		cout << 0;
		return 0;
	}
	while (true) {
		if (standard > pq.top()) {
			break;
		}
		standard++;
		int tmp = pq.top() - 1;
		pq.pop();
		pq.push(tmp);
		result++;
	}
	cout << result;
}