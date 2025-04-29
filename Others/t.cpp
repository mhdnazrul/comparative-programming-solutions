#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

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
  int n;
  cin >> n;
  vi current_array(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> current_array[i];
  }

  for (int k = 1; k <= n; ++k)
  {
    ll max_sum = -1;
    vi best_array;

    for (int i = 0; i < current_array.size(); ++i)
    {
      vi temp_array = current_array;
      int element_to_move = temp_array[i];
      temp_array.erase(temp_array.begin() + i);
      temp_array.push_back(element_to_move);

      ll current_sum = 0;
      for (int j = 0; j < k; ++j)
      {
        current_sum += temp_array[temp_array.size() - 1 - j];
      }

      if (current_sum > max_sum)
      {
        max_sum = current_sum;
        best_array = temp_array;
      }
    }
    cout << max_sum << (k == n ? "" : " ");
    current_array = best_array;
  }
  cout << endl;
}

int main()
{
  FAST_IO;
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}