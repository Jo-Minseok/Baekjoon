#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int sum = 0;
    for(auto i : arr){
        sum += i;
    }
    answer = 1.0 * sum / arr.size(); 
    return answer;
}