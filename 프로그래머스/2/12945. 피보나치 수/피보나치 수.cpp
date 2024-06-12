#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    vector<int> list = {0,1};
    for(int i=2;i<=n;i++){
        int tmp = list[i-1] + list[i-2];
        list.push_back(tmp%1234567);
    }
    return list[n];
}