#include <stdio.h>

int main() {
	int music[8];
	int as = 0, des = 0;
	for(int i =0; i<8;i++){
		scanf("%d", &music[i]);
		if (i + 1 == music[i]) {
			as++;
		}
		else if (8 - i == music[i]) {
			des++;
		}
	}

	if (as == 8) {
		printf("ascending");
	}
	else if (des == 8) {
		printf("descending");
	}
	else {
		printf("mixed");
	}
	return 0;
}