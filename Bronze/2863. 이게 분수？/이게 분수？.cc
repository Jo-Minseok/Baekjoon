#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	double input;
	vector<double> num(4);
	vector<double>result(4);
	// 값 입력부
	for (int i = 0; i < 4; i++) {
		switch (i)
		{
		case 0: case 1:
			cin >> num[i];
			break;
		case 2:
			cin >> num[3];
			break;
		case 3:
			cin >> num[2];
		}
	}
	// 회전하면서 결과값 얻기
	for (int i = 0; i < 4; i++) {
		result[i] = num[0] / num[3] + num[1] / num[2];
		rotate(num.begin(), num.end() - 1, num.end());
	}

	// 가장 큰, 작은 결과값 얻기
	double max_r = result[0];
	double min_r = result[0];
	for (int i = 0; i < 4; i++) {
		if (min_r > result[i]) {
			min_r = result[i];
		}
		if (max_r < result[i]) {
			max_r = result[i];
		}
	}

	// 큰 결과값 개수 카운트(1개가 아닐 경우 최소값 찾아야함)
	int count_re = count(result.begin(), result.end(), max_r);
	double find_result;
	if (count_re == 1) { // 1개일 경우 최대값을 검색 조건으로
		find_result = max_r;
	}
	else { // 1개가 아닐 경우 최소값을 검색 조건으로
		find_result = min_r;
	}

	// 결과가 몇번째 인덱스에 있는지 확인
	for (int i = 0; i < 4; i++) {
		if (find_result == result[i]) {
			cout << i;
			return 0;
		}
	}
}