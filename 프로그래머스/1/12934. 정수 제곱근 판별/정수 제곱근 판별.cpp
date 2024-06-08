#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int i=1;
    bool check = false;
    while(true){
        if(pow(i,2) == n){
            check = true;
            break;
        }
        else if(pow(i,2) > n){
            break;
        }
        i++;
    }
    return check ? pow(i+1,2) : -1;
}