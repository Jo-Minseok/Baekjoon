#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int dic, pro;
	string monster;
	map<int,string> diction;
	map<string,int> test;

	cin >> dic >> pro;
	for (int i = 0; i < dic; i++) {
		cin >> monster;
		diction.insert({ i+1,monster });
		test.insert({ monster,i+1 });
	}
	for (int i = 0; i < pro; i++) {
		cin >> monster;
		if ('A' <= monster[0] && monster[0] <= 'Z') {
			cout << test.at(monster) << "\n";
		}
		else {
			cout << diction.at(stoi(monster)) << "\n";
		}
	}
}