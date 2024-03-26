#include <iostream>
#include <map>
#include <cmath>
using namespace std;
int main(){
    map<string, long long>test{
        {"black",0},
        {"brown",1},
        {"red",2},
        {"orange",3},
        {"yellow",4},
        {"green",5},
        {"blue",6},
        {"violet",7},
        {"grey",8},
        {"white",9}
    };
    string fir,sec,thi;
    cin >> fir>>sec>>thi;
    printf("%lld",(test[fir]*10 + test[sec]) * (long long)pow(10,test[thi]));
}