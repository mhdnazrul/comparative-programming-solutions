#include <iostream>
#include<vector>
using namespace std;
using ll = long long;

void solve() {
  int t;
  cin >> t;
  vector<int> vec(t);
  for (int i = 0; i < t;++i){
    cin >> vec[i];
  }
  for (int j = 0; j < t;++j){
    if(vec[j]%2==0){
      cout << vec[j] << " ";
    }
  }
  cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
//  int t;
//  cin >> t;
//  while (t--) {
        solve();
    
//  }
    return 0;
}