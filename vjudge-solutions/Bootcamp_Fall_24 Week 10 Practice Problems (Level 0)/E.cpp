#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
  priority_queue<int> ans;
  string op;

  while (cin >> op && op != "end")
  {
    if (op == "insert")
    {
      int k;
      cin >> k;
      ans.push(k);
    }
    else if (op == "extract")
    {
      cout << ans.top() << "\n";
      ans.pop();
    }
  }
}

int main()
{
  FAST_IO;
  //  int T; cin >> T;while(T--)
  solve();
  return 0;
}