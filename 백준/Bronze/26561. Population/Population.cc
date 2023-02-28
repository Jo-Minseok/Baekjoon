#include <iostream>
using namespace std;
int main() {
	int count;
	int start_human_count;
	int time;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> start_human_count >> time;
		start_human_count -= time / 7;
		start_human_count += time / 4;
		cout << start_human_count << "\n";
	}
}