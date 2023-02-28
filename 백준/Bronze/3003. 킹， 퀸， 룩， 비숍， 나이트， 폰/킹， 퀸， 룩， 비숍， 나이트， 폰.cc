#include <stdio.h>

int main() {
	int result[6] = { 0 };
	int chess_white[6];
	int chess_com[6] = { 1,1,2,2,2,8 };
	for (int i = 0; i < 6; i++) {
		scanf("%d", &chess_white[i]);
		result[i] = chess_com[i] - chess_white[i];
	}
	for (int i = 0; i < 6; i++) {
		printf("%d ", result[i]);
	}
	return 0;
}