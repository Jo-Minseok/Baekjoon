#include <stdio.h>

int main() {
	int human_count,stock,result;
	while (scanf("%d %d", &human_count, &stock)!= EOF) {
		human_count++;
		result = stock / human_count;
		printf("%d\n", result);
	}
	return 0;
}