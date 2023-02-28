#include <iostream>
#include <queue>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  queue<int> que;
  string command;
  int command_count, num;
  cin >> command_count;
  for (int i = 0; i < command_count; i++)
  {
    cin >> command;
    if (command == "push")
    {
      cin >> num;
      que.push(num);
    }
    else if (command == "pop")
    {
      if (que.empty())
      {
        cout << -1 << "\n";
      }
      else
      {
        cout << que.front() << "\n";
        que.pop();
      }
    }
    else if (command == "size")
    {
      cout << que.size() << "\n";
    }
    else if (command == "empty")
    {
      if (que.empty())
      {
        cout << 1 << "\n";
      }
      else
      {
        cout << 0 << "\n";
      }
    }
    else if (command == "front")
    {
      if (que.empty())
      {
        cout << -1 << "\n";
      }
      else
      {
        cout << que.front() << "\n";
      }
    }
    else if (command == "back")
    {
      if (que.empty())
      {
        cout << -1 << "\n";
      }
      else
      {
        cout << que.back() << "\n";
      }
    }
  }
}