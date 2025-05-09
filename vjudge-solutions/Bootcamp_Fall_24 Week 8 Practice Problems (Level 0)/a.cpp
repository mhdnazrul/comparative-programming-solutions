#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

ll solve(int n, int a, int b, int c)
{
  if (n == 1)
  {
    return a;
  }
  else if (n == 2)
  {
    return b;
  }
  else if (n == 3)
  {
    return c;
  }
  else
  {
    return solve(n - 1, a, b, c) + solve(n - 2, a, b, c) + solve(n - 3, a, b, c);
  }
}
int main()
{
  FAST_IO;
  int n, a, b, c;
  cin >> n;
  cin >> a >> b >> c;
  cout << solve(n, a, b, c) << endl;
  return 0;
}