#include <stdio.h>

int main() {
	int num[10] = { 0 }, count = 0, div[42] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		div[num[i] % 42] ++;
	}
	for (int i = 0; i < 42; i++) {
		if(div[i]!=0){
			count++;
		}
	}

	printf("%d", count);
	return 0;
}