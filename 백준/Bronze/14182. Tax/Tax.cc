#include <iostream>
using namespace std;
int main() {
	unsigned long long num;
	while (true) {
		cin >> num;
		if (num == 0) {
			break;
		}
		else {
			if (num <= 1000000) {
				printf("%d\n",num);
			}
			else if(1000000<num && num<=5000000) {
				printf("%d\n", (int)(num - num * 0.1));
			}
			else if (5000000 <= num) {
				printf("%d\n", (int)(num - num * 0.2));
			}
		}
	}
}