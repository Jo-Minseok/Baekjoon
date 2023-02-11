#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case,student_count,over_count=0;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		over_count = 0;
		cin >> student_count;
		int* score = new int[student_count] {0};
		int sum = 0;
		for (int j = 0; j < student_count; j++) {
			cin >> score[j];
			sum += score[j];
		}
		for (int j = 0; j < student_count; j++) {
			if (score[j] > sum / student_count) {
				over_count++;
			}
		}
		printf("%.3f%%\n", (double)over_count / student_count * 100);
		delete score;
	}
}