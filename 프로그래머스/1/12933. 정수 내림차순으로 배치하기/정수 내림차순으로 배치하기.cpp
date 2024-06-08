#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    string text = to_string(n);
    sort(text.begin(),text.end(),greater<int>());
    return stol(text);
}