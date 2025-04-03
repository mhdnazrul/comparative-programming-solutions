#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

void solve()
{
  ll n, m;
  cin >> n >> m;

  int count = 0;
  for (int a = 0; a <= sqrt(n); ++a)
  {
    ll b = n - a * a;
    if (a + b * b == m)
    {
      count++;
    }
  }

  cout << count << endl;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}