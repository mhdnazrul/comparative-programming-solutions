#include <iostream>
#include <vector>

using namespace std;

void solve()
{
  int n;
  cin >> n;

  vector<vector<char>> matrix(n, vector<char>(n, '.')); // Initialize with '.'

  for (int i = 1; i <= n; ++i)
  {
    for (int j = i + 1 - i; j <= n; ++j)
    {
      for (int row = i - 1; row < n; ++row)
      {
        for (int col = i - 1; col < j; ++col)
        {
          if (i % 2 == 1)
          { // Odd rows: black
            matrix[row][col] = '#';
          }
          else
          { // Even rows: white
            matrix[row][col] = '.';
          }
        }
      }
    }
  }

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      cout << matrix[i][j];
    }
    cout << endl;
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}