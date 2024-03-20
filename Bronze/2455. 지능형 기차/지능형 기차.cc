#include <stdio.h>

int main() {
	int exit, enter,human_count=0;
	int human[4] = { 0 };
	for (int i = 0; i < 4; i++) {
		scanf("%d %d", &exit, &enter);
		if (i == 0) {
			human[0] += enter - exit;
		}
		else {
			human[i] += (human[i-1] + enter - exit);
		}
		if (human_count < human[i]) {
			human_count = human[i];
		}
	}
	printf("%d", human_count);
	
	return 0;
}