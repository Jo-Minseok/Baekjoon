#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test_case;
	string problem;
	cin >> test_case;
	while (test_case--) {
		cin >> problem;
		if (problem == "P=NP") {
			cout << "skipped\n";
		}
		else{
			string num;
			int num_var;
			int result = 0;
			for (int i = 0; i < problem.length(); i++) {
				if (isdigit(problem[i])) {
					num += problem[i];
					if (i == problem.length() - 1) {
						result += stoi(num);
					}
				}
				else {
					result += stoi(num);
					num.clear();
				}
			}
			cout << result << "\n";
		}
	}
}