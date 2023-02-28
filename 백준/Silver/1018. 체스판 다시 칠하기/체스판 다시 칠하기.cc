#include <iostream>
using namespace std;

string a1[8] = { "WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW" };
string a2[8] = { "BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB" };
string a3[50];

int wb(int x, int y) {
	int count = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (a1[i][j] != a3[x+i][y+j]) {
				count++;
			}
		}
	}
	return count;
}

int bw(int x, int y) {
	int count = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (a2[i][j] != a3[x+i][y+j]) {
				count++;
			}
		}
	}
	return count;
}

int main() {
	int width, height;
	cin >> height >> width;
	int wbResult=0, bwResult = 0;
	int mini = 2500,tmp = 0;
	for (int i = 0; i < height; i++) {
		cin >> a3[i];
	}

	for (int i = 0; i + 8 <= height; i++) {
		for (int j = 0; j + 8 <= width; j++) {
			wbResult = wb(i, j);
			bwResult = bw(i, j);
			tmp = (wbResult < bwResult ? wbResult : bwResult);
			if (mini > tmp) {
				mini = tmp;
			}
		}
	}
	cout << mini;
}