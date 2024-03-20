#include <stdio.h>

int main() {
	int chicken, coke, beer, chi_count=0;
	scanf("%d %d %d", &chicken, &coke, &beer);
	while (1) {
		if (chicken > 0&&beer>0) {
			beer--;
			chicken--;
			chi_count++;
		}
		else {
			break;
		}
	}

	while (1) {
		if (chicken > 0 && coke>1) {
			coke -= 2;
			chicken--;
			chi_count++;
		}
		else {
			break;
		}
	}
	printf("%d", chi_count);
	return 0;
}