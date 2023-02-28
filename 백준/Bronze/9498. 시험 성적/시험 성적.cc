#include <stdio.h>

int main(void) {
	int num1;
	scanf("%d", &num1);
	if (100 >= num1 && num1 >= 90) {
		printf("A");
	}
	else if (89 >= num1 && num1 >= 80) {
		printf("B");
	}
	else if (79 >= num1 && num1 >= 70) {
		printf("C");
	}
	else if (69 >= num1 && num1 >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}
	return 0;
}