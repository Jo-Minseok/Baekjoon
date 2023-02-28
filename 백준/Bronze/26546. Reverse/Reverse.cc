#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	string text;
	int start_index, end_index;
	for (int i = 0; i < count; i++) {
		cin >> text >> start_index >> end_index;
		text.replace(start_index,end_index - start_index, "");
		cout << text << "\n";
	}
}