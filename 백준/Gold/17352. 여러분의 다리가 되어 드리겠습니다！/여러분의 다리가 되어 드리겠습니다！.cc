#include <iostream>
using namespace std;

int ParentArr[300001];

int ParentFind(int node1){
    if(ParentArr[node1]<0){
        return node1;
    }
    else{
        return ParentArr[node1] = ParentFind(ParentArr[node1]);
    }
}

void Union_set(int node1,int node2){
    node1 = ParentFind(node1);
    node2 = ParentFind(node2);
    if(node1 == node2){
        return;
    }
    if(ParentArr[node1] < ParentArr[node2]){
        ParentArr[node1] += ParentArr[node2];
        ParentArr[node2] = node1;
    }
    else{
        ParentArr[node2] += ParentArr[node1];
        ParentArr[node1] = node2;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int bridge_count,node1,node2;
    cin >> bridge_count;
    fill(ParentArr,ParentArr+300001,-1);
    for(int i=0;i<bridge_count-2;i++){
        cin >> node1 >> node2;
        Union_set(node1,node2);
    }
    for(int i=1;i<=bridge_count;i++){
        for(int j=1;j<=bridge_count;j++){
            if(ParentFind(i)!=ParentFind(j)){
                cout << i << " " << j;
                return 0;
            }
        }
    }
}