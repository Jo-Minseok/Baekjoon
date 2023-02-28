#include <stdio.h>

int main() {
	int count,sum=0,num,result[7],index = 0,min;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		sum = 0, min = 0,index = 0;
		for (int j = 0; j < 7; j++) {
			scanf("%d", &num);
			if (num % 2 == 0) {
				sum += num;
				result[index] = num;
				index++;
			}
		}
		min = result[0];
		for (int k = 0; k < index; k++) {
			if (min > result[k]) {
				min = result[k];
			}
		}
		printf("%d %d\n", sum, min);
	}
}