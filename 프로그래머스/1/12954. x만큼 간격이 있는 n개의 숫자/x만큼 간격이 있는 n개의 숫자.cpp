#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    for(long long i=0,j=x;i<n;i++,j+=x){
        answer.push_back(j);
    }
    return answer;
}