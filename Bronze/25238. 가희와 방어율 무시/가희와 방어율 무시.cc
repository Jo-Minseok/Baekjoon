#include <stdio.h>

int main() {
	int real_armor,armor;
	double u_armor;
	scanf("%d %lf", &armor, &u_armor);
	real_armor = armor - armor*(u_armor / 100);
	if (real_armor >= 100) {
		puts("0");
	}
	else {
		puts("1");
	}
	return 0;
}