#include <stdio.h>

int main() {
	int total_money, item_var, result_total_m = 0, item_price[100] = { 0 }, item_count[100] = { 0 };
	scanf("%d", &total_money);
	scanf("%d", &item_var);
	for (int i = 0; i < item_var; i++) {
		scanf("%d %d", &item_price[i], &item_count[i]);
	}
	for (int i = 0; i < item_var; i++) {
		result_total_m += item_price[i] * item_count[i];
	}
	if (result_total_m == total_money) {
		puts("Yes");
	}
	else {
		puts("No");
	}
	return 0;
}