#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int x = n;
    cout << "x: " << x << " ,";
    while (true)
    {
      // Inline gcdSum logic
      int num = x;
      cout << "num: " << num << " ,";
      int sumDigits = 0;
      while (num > 0)
      {
        sumDigits += num % 10;
        cout << "sumDigits: " << sumDigits << " ,";
        num /= 10;
      }

      // Inline gcd logic
      int a = x;
      int b = sumDigits;
      cout << "a: " << a << " ,";
      cout << "b: " << b << " ," << endl;
      while (b != 0)
      {
        int temp = b;
        cout << "while temp: " << temp << " ,";
        b = a % b;
        cout << "while b: " << b << " ,";
        a = temp;
        cout << "while a: " << a << " ,";
        cout << endl;
      }

      if (a > 1)
      { // a is the gcd
        cout << "ans: " << x << endl;
        break;
      }
      x++;
    }
  }
  return 0;
}