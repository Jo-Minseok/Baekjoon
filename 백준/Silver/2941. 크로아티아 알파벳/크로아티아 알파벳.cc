#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	vector<string> list =  { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	string text;
	cin >> text;
	int index;
	for (int i = 0; i < list.size(); i++) {
		while (true) {
			index = text.find(list[i]);
			if (index == string::npos) {
				break;
			}
			else {
				text.replace(index, list[i].length(), "#");
			}
		}
	}
	cout << text.length();
}