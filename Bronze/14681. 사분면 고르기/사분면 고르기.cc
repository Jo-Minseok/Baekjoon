#include <stdio.h>

int main() {
	int xpos, ypos;
	scanf("%d", &xpos);
	scanf("%d", &ypos);
	if (xpos > 0) {
		if (ypos > 0) {
			printf("1");
		}
		else if(ypos < 0) {
			printf("4");
		}
	}
	else if (xpos < 0) {
		if (ypos > 0) {
			printf("2");
		}
		else if (ypos < 0) {
			printf("3");
		}
	}

	return 0;
}