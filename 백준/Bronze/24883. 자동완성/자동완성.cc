#include <stdio.h>

int main() {
	char alpha;
	scanf("%c", &alpha);
	switch (alpha) {
	case 'N': case 'n':
		puts("Naver D2");
		break;
	default:
		puts("Naver Whale");
		break;
	}
	return 0;
}