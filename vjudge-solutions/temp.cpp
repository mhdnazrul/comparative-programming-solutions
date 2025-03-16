#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

void generateBinary(int n, string current, vector<string> &result)
{
  if (current.length() == n)
  {
    result.push_back(current);
    return;
  }
  generateBinary(n, current + "0", result); 
  generateBinary(n, current + "1", result);
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<string> binaryNumbers;
    generateBinary(n, "", binaryNumbers);
    for (const string &binary : binaryNumbers)
    {
      cout << binary << endl;
    }
  }
  return 0;
}