#include <iostream>
using namespace std;
int main() {
	double M, S, G; // M: 에스컬레이터 총 개수, 서있을때, 1초 S개, 걸어서 1초에 G개
	double A, B; // 걸어올라가는 시작 인원: A, 서있는 시작 인원 : B
	double L, R; // 왼쪽줄(걸어서 올라감), 오른쪽줄(가만히 있음)
	double Lresult, Rresult;
	cin >> M >> S >> G;
	cin >> A >> B;
	cin >> L >> R;
	Lresult = (1 / A) * L + M / G;
	Rresult = (1 / B) * R + M / S;
	if (Lresult < Rresult) {
		cout << "friskus";
	}
	else {
		cout << "latmask";
	}
}