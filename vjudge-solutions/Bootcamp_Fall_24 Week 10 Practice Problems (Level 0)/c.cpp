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
  vector<int> s;
  string op;

  while (cin >> op)
  {
    if (op == "push")
    {
      int n;
      cin >> n;
      s.push_back(n);
      cout << "ok\n";
    }
    else if (op == "pop")
    {
      cout << s.back() << "\n";
      s.pop_back();
    }
    else if (op == "back")
    {
      cout << s.back() << "\n";
    }
    else if (op == "size")
    {
      cout << s.size() << "\n";
    }
    else if (op == "clear")
    {
      s.clear();
      cout << "ok\n";
    }
    else if (op == "exit")
    {
      cout << "bye\n";
      break;
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