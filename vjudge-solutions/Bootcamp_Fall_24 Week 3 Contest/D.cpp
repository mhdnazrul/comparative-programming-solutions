#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void solve()
{
  int people, minimum_age;
  cin >> people >> minimum_age;
  vector<int> VEC(people);
  for (int i = 0; i < people; i++)
  {
    cin >> VEC[i];
  }
  int count = 0;
  for (int j = 0; j < people; j++)
  {
    if (VEC[j] >= minimum_age)
    {
      count++;
    }
  }
  cout << count << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}