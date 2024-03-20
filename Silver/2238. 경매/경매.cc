#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[10001] = { 0 };
bool comp(pair<string, int> a, pair<string, int>b) {
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<string, int>> v;
    int price_limit, count_auction, price, frequency;
    string name;

    cin >> price_limit >> count_auction;
    frequency = count_auction;

    for (int i = 0; i < count_auction; i++) {
        cin >> name >> price;
        arr[price]++;
        v.push_back({ name,price });
    }
    for (int i = 1; i <= price_limit; i++) {
        if (arr[i] != 0 && frequency > arr[i]) {
            price = i;
            frequency = arr[i];
        }
    }
    for (int i = 0; i < count_auction; i++) {
        if (v[i].second == price) {
            cout << v[i].first << " " << v[i].second;
            return 0;
        }
    }
}