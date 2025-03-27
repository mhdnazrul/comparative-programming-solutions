#include <iostream>

using namespace std;
using ll = long long;

void solve()
{

  ll n, m;
  cin >> n >> m;

  int count = 0;
  for (int a = 0; a <= n*n; ++a)
  {
    for (int b = 0; b <= n*n; ++b)
    {
      if (a * a + b == n && a + b * b == m)
      {
        count++;
      }
    }
  }

  cout << count << endl;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  //  int t;
  //  cin >> t;
  //  while (t--) {
  solve();

  //  }
  return 0;
}