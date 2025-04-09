#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
  FAST_IO;
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
  }
}
