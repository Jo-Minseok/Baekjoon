#include <stdio.h>

int main() {
	int num[1000] = { 0 };
	int count_prime = 0,real_prime=0;
	int count;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%d", &num[i]);
		count_prime = 0;
		for (int j = 1; j <= num[i]; j++) {
			if (num[i] % j == 0) {
				count_prime++;
			}
		}
		if (count_prime == 2) {
			real_prime++;
		}
	}
	printf("%d", real_prime);

	return 0;
}