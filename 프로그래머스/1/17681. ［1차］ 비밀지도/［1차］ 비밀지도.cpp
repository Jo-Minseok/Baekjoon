#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i=0;i<n;i++){
        string line = "";
        int bitNum = arr1[i] | arr2[i];
        for(int i=0;i<n;i++){
            bitNum %2 ? line += "#" : line += " ";
            bitNum /=2;
        }
        reverse(line.begin(),line.end());
        answer.push_back(line);
    }
    return answer;
}