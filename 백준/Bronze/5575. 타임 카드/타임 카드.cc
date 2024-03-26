#include <stdio.h>

int main() {
	int en_hour[3], en_min[3], en_sec[3];
	int ex_hour[3], ex_min[3], ex_sec[3];
	int p_hour[3], p_min[3], p_sec[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d %d %d %d %d %d", &en_hour[i], &en_min[i], &en_sec[i], &ex_hour[i], &ex_min[i], &ex_sec[i]);
	}for (int i = 0; i < 3; i++) {
		p_hour[i] = ex_hour[i] - en_hour[i];
		p_min[i] = ex_min[i] - en_min[i];
		p_sec[i] = ex_sec[i] - en_sec[i];
		if (p_sec[i] < 0) {
			p_min[i]--;
			p_sec[i] += 60;
		}
		if (p_min[i] < 0) {
			p_hour[i]--;
			p_min[i] += 60;
		}
		printf("%d %d %d\n", p_hour[i], p_min[i], p_sec[i]);
	}
	return 0;
}