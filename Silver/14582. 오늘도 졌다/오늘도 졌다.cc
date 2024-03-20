#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int jeminis = 0, starlink = 0;
	int jemini_score[9];
	int star_score[9];
	bool check = false;
	for (int i = 0; i < 9; i++) {
		cin >> jemini_score[i];
	}
	for (int i = 0; i < 9; i++) {
		cin >> star_score[i];
	}
	for (int i = 0; i < 9; i++) {
		jeminis += jemini_score[i];
		if (jeminis > starlink) {
			check = true;
		}
		starlink += star_score[i];
	}
	cout << (check ? "Yes" : "No");
}