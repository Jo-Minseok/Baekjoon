#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    int p = count(s.begin(),s.end(),'p');
    int P = count(s.begin(),s.end(),'P');
    int Y = count(s.begin(),s.end(),'Y');
    int y = count(s.begin(),s.end(),'y');

    return (p+P) - (y+Y) == 0 ? true : false;
}