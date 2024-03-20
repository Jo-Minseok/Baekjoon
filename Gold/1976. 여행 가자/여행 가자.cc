#include <iostream>
using namespace std;

int arr[201];
int rank_arr[201];
int check_city[1001];

int ParentFind(int x) {
	if (x == arr[x]) {
		return x;
	}
	return arr[x] = ParentFind(arr[x]);
}


void Union_Set(int x, int y) {
	x = ParentFind(x);
	y = ParentFind(y);

	if (x == y) {
		return;
	}
	if (rank_arr[x] > rank_arr[y]) {
		arr[y] = x;
		rank_arr[x] += rank_arr[y];
	}
	else {
		arr[x] = y;
		rank_arr[y] += rank_arr[x];
	}
}

void Make_set() {
	for (int i = 0; i < 201; i++) {
		arr[i] = i;
		rank_arr[i] = 1;
	}
}

bool isUnion(int x, int y) {
	return ParentFind(x) == ParentFind(y);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int city_count, plan_count;
	bool check;
	bool result = true;
	cin >> city_count >> plan_count;
	Make_set();
	for (int i = 1; i <= city_count; i++) {
		for (int j = 1; j <= city_count; j++) {
			cin >> check;
			if (check) {
				Union_Set(i, j);
			}
		}
	}
	for (int i = 0; i < plan_count; i++) {
		cin >> check_city[i];
	}
	for (int i = 1; i < plan_count; i++) {
		if (!isUnion(check_city[i - 1], check_city[i])) {
			result = false;
		}
	}
	cout << ((result==true) ? "YES" : "NO");
}