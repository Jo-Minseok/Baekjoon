#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>
using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    list<string> cache;
    for(auto i:cities){
        transform(i.begin(),i.end(),i.begin(),::toupper);
        list<string>::iterator it = find(cache.begin(),cache.end(),i);
        if(it != cache.end()){
            answer += 1;
            cache.erase(it);
        }
        else{
            answer += 5;
        }
        cache.push_front(i);
        if(cache.size() > cacheSize){
            cache.pop_back();
        }
    }
    return answer;
}