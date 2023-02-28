#include <stdio.h>

int Fibonacci(int a) {
	if (a > 1) {
		return Fibonacci(a - 1) + Fibonacci(a - 2);
	}
	else {
		return a;
	}
}

int main() {
	int count;
	scanf("%d", &count);
	printf("%d\n", Fibonacci(count));
	return 0;
}