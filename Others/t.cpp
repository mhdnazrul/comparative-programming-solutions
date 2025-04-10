#include <iostream>
#include <vector>

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
  int H, W;
  cin >> H >> W;

  int s1, s2;
  cin >> s1 >> s2;

  vector<string> C(H);
  for (int i = 0; i < H; ++i)
  {
    cin >> C[i];
  }

  string X;
  cin >> X;
  int x = s1 - 1;
  int y = s2 - 1;

  for (char m : X)
  {
    int next_x = x, next_y = y;

    if (m == 'L')
      next_y--;
    else if (m == 'R')
      next_y++;
    else if (m == 'U')
      next_x--;
    else if (m == 'D')
      next_x++;
    if (next_x >= 0 && next_x < H && next_y >= 0 && next_y < W && C[next_x][next_y] == '.')
    {
      x = next_x;
      y = next_y;
    }
  }
  cout << x + 1 << " " << y + 1 << endl;
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}