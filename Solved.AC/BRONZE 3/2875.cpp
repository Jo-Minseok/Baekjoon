#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int N, M, K;
	int team, left_human = 0;
	cin >> N >> M >> K;
	if (N / 2 >= M) {
		team = M;
		left_human = N - 2 * M;
	}
	else {
		team = N / 2;
		left_human = M - N / 2;
		left_human += N % 2;
	}
	if (left_human>= K) {
		cout << team;
		return 0;
	}
	else {
		cout << team - ceil((double)(K - left_human)/3);
	}
}