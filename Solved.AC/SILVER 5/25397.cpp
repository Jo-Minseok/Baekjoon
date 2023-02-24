#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int skill_count;
	bool check = false;
	string skill;
	int result = 0;
	int Scount = 0;
	int Lcount = 0;
	cin >> skill_count >> skill;
	for (int i = 0; i<skill_count; i++) {
		if (isdigit(skill[i])) {
			result++;
		}
		else {
			switch (skill[i])
			{
			case 'L':
				Lcount++;
				break;
			case 'S':
				Scount++;
				break;
			case 'R':
				if (Lcount > 0) {
					Lcount--;
					result++;
				}
				else {
					check = true;
				}
				break;
			case 'K':
				if (Scount>0){
					Scount--;
					result++;
				}
				else {
					check = true;
				}
				break;
			default:
				break;
			}
		}
		if (check) {
			break;
		}
	}
	cout << result;
}