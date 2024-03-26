#include <iostream>
using namespace std;
int main() {
	long r_row, r_column;
	long l_row, l_column;
	long row, column;
	cin >> row >> column;
	if (row % 2 == 0 || column % 2 == 0) {
		cout << 0;
	}
	else {
		l_row = row / 2;
		l_column = column / 2;
		r_row = row - l_row;
		r_column = column -l_column;
		if(r_row * column - l_row * column > r_column * row - l_column *row){
			cout << r_column * row - l_column * row;
		}
		else {
			cout << r_row * column - l_row * column;
		}
	}
}