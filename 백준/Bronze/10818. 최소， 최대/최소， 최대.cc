#include <stdio.h>

int main() {
	int count,input,max=-1000000, min=1000000;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%d", &input);
		if (max < input) {
			max = input;
		}
		if (min > input) {
			min = input;
		}
	}
	printf("%d %d", min, max);
	return 0;
}