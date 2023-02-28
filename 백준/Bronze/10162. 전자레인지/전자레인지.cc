#include <stdio.h>

int main() {
	int a = 300, b = 60, c = 10,cook_time, push_a, push_b, push_c;
	scanf("%d", &cook_time);
	push_a = cook_time / a;
	cook_time %= a;
	push_b = cook_time / b;
	cook_time %= b;
	push_c = cook_time / c;
	cook_time %= c;
	if (cook_time!=0) {
		printf("-1");
	}
	else {
		printf("%d %d %d", push_a, push_b, push_c);
	}
	return 0;
}