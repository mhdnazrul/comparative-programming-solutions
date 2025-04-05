#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
  string str;
  cin >> str;
  string res = str;
  reverse(res.begin(), res.end());
  if (str == res)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main()
{
  FAST_IO;
  // int t;
  // cin >> t;
  // for (int i = 1; i <= t; ++i){
  solve();
  //} 
  return 0;
}