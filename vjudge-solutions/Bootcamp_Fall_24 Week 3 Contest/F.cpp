#include <iostream>
#include <string>
using namespace std;
using ll = long long;

void solve()
{

  int n;
  cin >> n;
  string ticket;
  cin >> ticket;

  for (int i = 0; i < n; ++i)
  {
    if (ticket[i] != '4' && ticket[i] != '7')
    {
      cout << "NO" << endl;
      return;
    }
  }

  int firstHalfSum = 0;
  int secondHalfSum = 0;
  for (int i = 0; i < n / 2; i++)
  {
    firstHalfSum += ticket[i] - '0';
  }
  for (int i = n / 2; i < n; i++)
  {
    secondHalfSum += ticket[i] - '0';
  }

  if (firstHalfSum == secondHalfSum)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return;
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