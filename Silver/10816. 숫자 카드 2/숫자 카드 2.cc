#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N, M;
	register int i;
	cin >> N;
	int* arr = new int[N];
	for(i=0;i<N;i++){
		cin >> arr[i];
	}
	cin >> M;
	int* fin = new int[M];
	for (i = 0; i < M; i++) {
		cin >> fin[i];
	}
	sort(arr, arr + N);
	for (i = 0; i < M; i++) {
		cout << upper_bound(arr, arr + N, fin[i]) - lower_bound(arr, arr + N, fin[i]) << " ";
	}
}