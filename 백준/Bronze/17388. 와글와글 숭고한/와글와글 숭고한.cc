#include <stdio.h>

int main() {
	int soong, kor, hanyang;
	scanf("%d %d %d", &soong, &kor, &hanyang);
	if (soong + kor + hanyang >= 100) {
		puts("OK");
	}
	else {
		if (soong > kor) {
			if (kor > hanyang) {
				puts("Hanyang");
			}
			else {
				puts("Korea");
			}
		}
		else if (kor > hanyang) {
			if (hanyang > soong) {
				puts("Soongsil");
			}
			else {
				puts("Hanyang");
			}
		}
		else if (hanyang > soong) {
			if (soong > kor) {
				puts("Korea");
			}
			else {
				puts("Soongsil");
			}
		}
	}
	return 0;
}