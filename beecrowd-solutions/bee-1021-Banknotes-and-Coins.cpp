//bee-1021-Banknotes-and-Coins.cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  float amount, coin, temp;
  int note;
  cin >> amount;
  // for note
  temp = amount;
  note = <int>amount;
  coin = amount % note;
  cout << note << coin;
  return 0;
}