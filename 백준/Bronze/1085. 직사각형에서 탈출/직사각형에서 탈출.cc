#include <stdio.h>
#include <math.h>

int main() {
	int x, y, w, h;
	int xw,yh;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	xw = x>abs(x - w) ? abs(x-w):x;
	yh = y>abs(y - h) ? abs(y-h):y;
	if (xw > yh) {
		printf("%d", yh);
	}
	else {
		printf("%d", xw);
	}
	return 0;
}