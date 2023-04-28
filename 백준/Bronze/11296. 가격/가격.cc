#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int test_case;
    double price;
    char Coupon,Credit,Color;
    cin >> test_case;
    cout.precision(2);
    while(test_case--){
        cin >> price >> Color >> Coupon >> Credit;
        switch (Color)
        {
        case 'R':
            price *= 0.55;
            break;
        case 'G':
            price *= 0.7;
            break;
        case 'B':
            price *= 0.8;
            break;
        case 'Y':
            price *= 0.85;
            break;
        case 'O':
            price *= 0.9;
            break;
        case 'W':
            price *= 0.95;
            break;
        }
        switch (Coupon)
        {
        case 'C':
        price *= 0.95;
        break;
        }
        switch(Credit){
            case 'C':
            price = round(price*10) / 10;
            break;
            case 'P':
            price = round(price*100) / 100;
            break;
        }
        cout << fixed << "$"<< price << "\n";
    }
}