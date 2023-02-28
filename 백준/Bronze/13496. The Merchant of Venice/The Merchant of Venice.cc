#include <iostream>
using namespace std;
int main() {
	int count;
	int n; // 안토니오가 소유한 무역선 수
	int s; // 배의 속도를 일당 마일로
	int d; // 남은 일수
	int* di; // 배i에서 베니스까지의 거리
	int* vi; // 배에 있는 두카트의 값
	int result;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> n >> s >> d;
		di = new int[n];
		vi = new int[n];
		result = 0;
		for (int k = 0; k < n; k++) {
			cin >> di[k] >> vi[k];
			if (s * d >= di[k]) {
				result += vi[k];
			}
		}
		cout << "Data Set " << i+1 << ":\n";
		cout << result << "\n\n";
	}
}