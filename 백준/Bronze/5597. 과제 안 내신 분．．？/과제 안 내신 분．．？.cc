#include <stdio.h>

int main() {
	int num=0, max=0,min=0,k = 0, result[2]={0};
	int arr[30] = { 0,};
	for (int i = 0; i < 28; i++) {
		scanf("%d", &num);
		arr[num-1]++;
	}
	for (int i = 0; i < 30; i++) {
		if (arr[i] == 0) {
			printf("%d\n", i + 1);
		}
	}
	return 0;
}