#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a[5][5];
  int findRow, findCol;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> a[i][j];
      if (a[i][j] == 1)
      {
        findRow = i;
        findCol = j;
      }
    }
  }
  int row = abs(2 - findRow);
  int col = abs(2 - findCol);
  cout << row + col << endl;

  return 0;
}