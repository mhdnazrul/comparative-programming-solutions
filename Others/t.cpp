#include <iostream>
#include <algorithm>

using namespace std;

#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

using ll = long long;
const ll mod = 1e9 + 7;

void solve()
{
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }
  reverse(arr, arr + n);
  for (int i = 0; i < n; ++i)
  { 
    cout << arr[i] << " ";
  }
  cout << endl;
  delete[] arr;
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}