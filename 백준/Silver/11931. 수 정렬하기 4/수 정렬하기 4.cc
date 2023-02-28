#include <iostream>
#include <algorithm>
using namespace std;

bool comp(int a, int b)
{
  return a > b;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int numCount;
  cin >> numCount;
  int *arr = new int[numCount]{0};
  for (int i = 0; i < numCount; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + numCount, comp);
  for (int i = 0; i < numCount; i++)
  {
    cout << arr[i] << "\n";
  }
}