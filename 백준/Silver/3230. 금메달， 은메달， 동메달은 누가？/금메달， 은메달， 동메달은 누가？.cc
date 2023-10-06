#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M,rank;
	cin >> N >> M;
	vector<int> first = { 0 }, second = { 0 };
	for (int i = 1; i <= N; i++) {
		cin >> rank;
		first.insert(first.begin() + rank, i);
	}
	
	for (int i = M; i >=1;i--) {
		cin >> rank;
		second.insert(second.begin()+rank, first[i]);
	}

	for (int i = 1; i <= 3; i++) {
		cout << second[i] << "\n";
	}
}