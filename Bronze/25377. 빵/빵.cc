#include <stdio.h>

int main() {
	int go[1000], bread[1000],result[1000],min,test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%d %d", &go[i], &bread[i]);
	}
	for (int i = 0; i < test; i++) {
		if (bread[i]-go[i] >= 0) {
			min = bread[i];
			break;
		}
		else {
			min = -1;
		}
	}
	for (int i = 0; i < test; i++) {
		if (bread[i] - go[i] >= 0) {
			if (bread[i] < min) {
				min = bread[i];
			}
		}
	}
	printf("%d", min);
	return 0;
}