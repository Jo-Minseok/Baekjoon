#include <iostream>
using namespace std;
int ParentArr[1000001];

int ParentFind(int value){
    if(ParentArr[value] < 0){
        return value;
    }
    return ParentArr[value] = ParentFind(ParentArr[value]);
}

void Union_Set(int x, int y){
    x = ParentFind(x);
    y = ParentFind(y);
    if(x == y){
        return;
    }
    if (ParentArr[x] < ParentArr[y])
    {
        ParentArr[x] += ParentArr[y];
        ParentArr[y] = x;
    }
    else
    {
        ParentArr[y] += ParentArr[x];
        ParentArr[x] = y;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case, user_count,link_count;
    cin >> test_case;
    for(int i=1;i<=test_case;i++){
        fill(ParentArr,ParentArr+1000001,-1);
        cin >> user_count >> link_count;
        int node1,node2;
        for(int j=0;j<link_count;j++){
            cin >> node1 >> node2;
            Union_Set(node1,node2);
        }
        cin >> link_count;
        cout << "Scenario " << i << ":\n";
        for(int j=0;j<link_count;j++){
            cin >> node1 >> node2;
            if (ParentFind(node1) == ParentFind(node2))
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
        cout << "\n";
    }
}