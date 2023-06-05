#include <iostream>
#include <algorithm>
using namespace std;

class Country {
public:
    int num, gold, silver, bronze;
    void get() {
        cin >> this->num >> this->gold >> this->silver >> this->bronze;
    }
};

bool comp(Country a, Country b) {
    if (a.gold > b.gold) {
        return true;
    }
    else if (a.gold == b.gold) {
        if (a.silver > b.silver) {
            return true;
        }
        else if (a.silver == b.silver) {
            if (a.bronze > b.bronze) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Country list[1001];
    int country_count, want_country;
    int equal = 0, prize = 1;
    cin >> country_count >> want_country;
    for (int i = 0; i < country_count; i++) {
        list[i].get();
    }
    sort(list, list+country_count, comp);

    for (int i = 0; i < country_count; i++) {
        if (list[i].num == want_country) {
            cout << prize;
            break;
        }
        if (list[i].gold > list[i + 1].gold) {
            prize += equal + 1;
            equal = 0;
        }
        else if (list[i].gold == list[i + 1].gold) {
            if (list[i].silver > list[i + 1].silver) {
                prize += equal + 1;
                equal = 0;
            }
            else if (list[i].silver == list[i + 1].silver) {
                if (list[i].bronze > list[i + 1].bronze) {
                    prize += equal + 1;
                    equal = 0;
                }
                else if (list[i].bronze == list[i + 1].bronze) {
                    equal++;
                }
            }
        }
    }
}