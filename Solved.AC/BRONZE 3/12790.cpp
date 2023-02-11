#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case;
	cin >> test_case;
	int HP, MP, attack, defense, HP_i,MP_i,attack_i,defense_i;
	for (int i = 0; i < test_case; i++) {
		cin >> HP >> MP >> attack >> defense >> HP_i >> MP_i >> attack_i >> defense_i;
		HP += HP_i;
		MP += MP_i;
		attack += attack_i;
		defense += defense_i;
		if (HP < 1) {
			HP = 1;
		}
		if (MP < 1) {
			MP = 1;
		}
		if (attack<0) {
			attack = 0;
		}
		cout << HP * 1 + MP * 5 + attack * 2 + defense * 2 << "\n";
	}
}