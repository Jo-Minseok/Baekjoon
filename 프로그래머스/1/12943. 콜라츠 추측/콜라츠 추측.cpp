#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    unsigned long long num_tmp = num;
    int answer = 0;
    while(true){
        if(num_tmp == 1){
            break;
        }
        else if(num_tmp%2==0){
            num_tmp /=2;
        }
        else{
            num_tmp = num_tmp*3+1;
        }
        answer++;
        if(answer == 500){
            return -1;
        }
    }
    return answer;
}