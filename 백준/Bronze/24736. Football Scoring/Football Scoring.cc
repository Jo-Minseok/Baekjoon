#include <iostream>

using namespace std;

int main(){
    int home_team_result = 0;
    int home_score[5], visit_score[5];
    int visit_team_result = 0;
    for(int i=0; i<5;i++){
        cin >> visit_score[i];
        switch(i){
            case 0:
            visit_team_result += visit_score[i]*6;
            break;
            case 1:
            visit_team_result += visit_score[i]*3;
            break;
            case 2:
            visit_team_result += visit_score[i]*2;
            break;
            case 3:
            visit_team_result += visit_score[i];
            break;
            case 4:
            visit_team_result += visit_score[i]*2;
            break;

        }
    }
    for(int i=0; i<5;i++){
        cin >> home_score[i];
                switch(i){
            case 0:
            home_team_result += home_score[i]*6;
            break;
            case 1:
            home_team_result += home_score[i]*3;
            break;
            case 2:
            home_team_result += home_score[i]*2;
            break;
            case 3:
            home_team_result+= home_score[i];
            break;
            case 4:
            home_team_result+= home_score[i]*2;
            break;

        }
    }
    cout << visit_team_result << " " << home_team_result;


}