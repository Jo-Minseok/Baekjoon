#include <iostream>
#include <algorithm>
using namespace std;
struct Info {
public:
	int age;
	string name;
	int index;
};
int compare(Info a, Info b) {
	if (a.age == b.age) {
		return a.index < b.index;
	}
	else {
		return a.age < b.age;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int count, i, j;
	cin >> count;
	Info* test = new Info[count];
	for (i = 0; i < count; i++) {
		cin >> test[i].age >> test[i].name;
		test[i].index = i;
	}
	sort(test, test + count, compare);
	for (i = 0; i < count; i++) {
		cout << test[i].age << " " << test[i].name << "\n";
	}
}