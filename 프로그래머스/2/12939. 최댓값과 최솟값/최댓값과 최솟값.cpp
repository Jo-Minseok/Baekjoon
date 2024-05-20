#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer;
    istringstream a(s);
    string tmp;
    vector<int> vector_arr;
    while(getline(a,tmp,' ')){
        vector_arr.push_back(stoi(tmp));
    }
    sort(vector_arr.begin(),vector_arr.end());
    
    answer = to_string(vector_arr.front()) + " " +to_string(vector_arr.back());
    return answer;
}