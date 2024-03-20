#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool sea(int a) {
	return !(a == 0 || a == 1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	while (scanf("%d%d",&N,&M) != EOF) {
		int result = 0;
		for (int i = N; i <= M; i++) {
			string num = to_string(i);
			int arr[10] = { 0 };
			for (int j = 0; j < num.length(); j++) {
				arr[num[j] - '0']++;
			}
			int tmp = count_if(&arr[0], &arr[10], sea);
			if (tmp == 0) {
				result++;
			}
		}
		cout << result << "\n";
	}
}