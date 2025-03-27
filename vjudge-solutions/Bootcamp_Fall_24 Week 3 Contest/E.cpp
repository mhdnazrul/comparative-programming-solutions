#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long;

void solve()
{
  int n;
  cin >> n;
  vector<int> V(n);
  for (int i = 0; i < n; i++)
  {
    cin >> V[i];
  }
  int total = 0;
  for (int i = 0; i < n; i++)
  {
    total += V[i];
  }
  if (abs(total) > n || (n % 2 != 0 && total % 2 != 0))
  {
    cout << -1 << '\n';
    return;
  }
  if (total == 0)
  {
    cout << 0 << '\n';
    return;
  }

  cout << abs(total) / 2 << '\n';
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