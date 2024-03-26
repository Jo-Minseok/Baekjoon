#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

bool comp(string a, string b) {
	if (a > b) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	map<string,string> list;
	map<string,string>::reverse_iterator it;
	unsigned int num_count;
	string name,doing;
	cin >> num_count;
	for (int i = 0; i < num_count; i++) {
		cin >> name >> doing;
		if (doing == "enter") {
			list.insert({ name,name });
		}
		else if(doing == "leave") {
			list.erase(name);
		}
	}
	for(it = list.rbegin();it!=list.rend();it++){
		cout << it->first << "\n";
	}
}