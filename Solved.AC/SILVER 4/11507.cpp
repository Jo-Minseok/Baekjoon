#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

bool Test(pair<string, bool> a) {
	return a.second == true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string text;
	cin >> text;
	map<string, bool>P, K, H, T;
	bool check = false;
	for (int i = 0; i < text.length(); i += 3) {
		string index = text.substr(i + 1, 2);
		if (text[i] == 'P') {
			if (P.find(index) != P.end()) {
				check = true;
				break;
			}
			P[index] = true;
		}
		else if (text[i] == 'K') {
			if (K.find(index)!=K.end()) {
				check = true;
				break;
			}
			K[index] = true;
		}
		else if (text[i] == 'H') {
			if (H.find(index) != H.end()) {
				check = true;
				break;
			}
			H[index] = true;
		}
		else if (text[i] == 'T') {
			if (T.find(index)!=T.end()) {
				check = true;
				break;
			}
			T[index] = true;
		}
	}
	if (check) {
		cout << "GRESKA";
	}
	else {
		cout << 13 - count_if(P.begin(), P.end(),Test) << " " << 13 - count_if(K.begin(), K.end(), Test) << " " << 13 - count_if(H.begin(), H.end(), Test) << " " << 13 - count_if(T.begin(), T.end(), Test);
	}
}