#include <stdio.h>

int main() {
	int arr[9], i = 0, max = 0,max_index=0;
	for (i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		if (max < arr[i]) {
			max = arr[i];
			max_index = i;
		}
	}
	printf("%d\n", max);
	printf("%d", max_index+1);
	return 0;
}