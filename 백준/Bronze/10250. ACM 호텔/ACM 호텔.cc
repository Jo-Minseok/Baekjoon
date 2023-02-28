#include <stdio.h>

int main() {
	int h, w, count;
	int room_h = 0, room_w=1;
	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%d %d %d", &h, &w, &count);
		for (int j = 0; j < count; j++) {
			room_h += 100;
			if (room_h >= (h * 100 + 100)) {
				room_h -= h * 100;
				room_w++;
			}
		}
		printf("%d\n", room_h + room_w);
		room_h = 0, room_w = 1;
	}
	return 0;
}