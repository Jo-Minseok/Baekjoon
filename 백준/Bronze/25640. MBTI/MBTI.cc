#include <iostream>

using namespace std;

int main() {
	string mbti, mbti_tmp;
	int count;
	int result = 0;
	cin >> mbti;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> mbti_tmp;
		if (mbti == mbti_tmp) {
			result++;
		}
	}
	cout << result;
}