#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    set<int> set_list(nums.begin(),nums.end());
    return set_list.size() > nums.size()/2 ? nums.size()/2 :set_list.size();
}