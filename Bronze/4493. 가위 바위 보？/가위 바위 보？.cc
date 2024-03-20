#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int count;
	int game_count;
	char p1, p2;
	int player1 = 0, player2 = 0;

	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> game_count;
		player1 = player2 = 0;
		for (int j = 0; j < game_count; j++) {
			cin >> p1 >> p2;
			if (p1 == 'R') {
				if (p2 == 'S') {
					player1++;
				}
				else if (p2 == 'P') {
					player2++;
				}
				else {
					player1++;
					player2++;
				}
			}
			else if (p1 == 'S') {
				if (p2 == 'R') {
					player2++;
				}
				else if (p2 == 'P') {
					player1++;
				}
				else {
					player1++;
					player2++;
				}
			}
			else if (p1 == 'P') {
				if (p2 == 'R') {
					player1++;
				}
				else if (p2 == 'S') {
					player2++;
				}
				else {
					player1++;
					player2++;
				}
			}
		}
		if (player1 < player2) {
			cout << "Player 2\n";
		}
		else if (player1 > player2) {
			cout << "Player 1\n";
		}
		else {
			cout << "TIE\n";
		}
	}
}