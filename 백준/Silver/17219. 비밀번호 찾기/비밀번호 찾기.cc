#include <iostream>
#include <map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int insert, find;
	cin >> insert >> find;
	map<string, string> password;
	string link, pass;
	for (int i = 0; i < insert; i++) {
		cin >> link >> pass;
		password.insert({link,pass});
	}
	for (int i = 0; i < find; i++) {
		cin >> link;
		cout << password[link] << "\n";
	}
}