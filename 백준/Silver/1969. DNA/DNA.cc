#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	vector<string> list;
	string a;
	int test_case,length;
	int sum = 0;
	cin >> test_case >> length;
	for (int i = 0; i < test_case; i++) {
		cin >> a;
		list.push_back(a);
	}
	string result;
	for (int i = 0; i < length; i++) {
		int A = 0, C = 0, T = 0, G = 0;
		for (int j = 0; j < test_case; j++) {
			if (list[j][i] == 'A') {
				A++;
			}
			else if (list[j][i] == 'C') {
				C++;
			}
			else if (list[j][i] == 'T') {
				T++;
			}
			else if (list[j][i] == 'G') {
				G++;
			}
		}
		if (A >= C && A >= T && A >= G) {
			result += 'A';
			sum += C + T + G;
		}
		else if (C >= A && C >= T && C >= G) {
			result += 'C';
			sum += A + T + G;
		}
		else if (G >= A && G >= C && G >= T) {
			result += 'G';
			sum += C + T + A;
		}
		else if (T >= A && T >= C && T >= G) {
			result += 'T';
			sum += C + A + G;
		}
	}
	cout << result << "\n" << sum;
}
