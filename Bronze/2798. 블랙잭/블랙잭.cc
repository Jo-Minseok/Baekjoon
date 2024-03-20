#include <stdio.h>

int main() {
	int count, sum;
	int card[100] = { 0 };
	int result = 0, sum_card = 0;
	scanf("%d %d", &count,&sum);
	for (int i = 0; i < count; i++) {
		scanf("%d", &card[i]);
	}
	for (int i = 0; i < count-2; i++) {
		for (int k = i + 1;k<count-1 ;k++) {
			for (int j = k + 1;j<count ; j++) {
				sum_card = card[i] + card[k] + card[j];
				if (sum_card> result && sum_card <= sum) {
					result = sum_card;
				}
			}
		}
	}
	printf("%d", result);
	return 0;
	
}