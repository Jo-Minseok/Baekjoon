#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string school_name;
	bool check = false;
	string original[] = { "northlondo","branksomeh","koreainter","stjohnsbur"};

	cin >> school_name;
	while (true) {
		for (int i = 0; i < school_name.length(); i++) {
			school_name[i] = 'a'+ (school_name[i]-'a'+1) % 26;
		}
		for (int i=0;i<4;i++) {
			if (original[i] == school_name) {
				check = true;
				switch (i)
				{
				case 0:
					cout << "NLCS";
					break;
				case 1:
					cout << "BHA";
					break;
				case 2:
					cout << "KIS";
					break;
				case 3:
					cout << "SJA";
					break;
				}
			}
		}
		if (check) {
			break;
		}
	}
}