#include <iostream>
#include <vector>

using namespace std;

int a, b, c, d, e, f;
vector<int> ans;

int fn(int n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;

    if (ans[n] != -1) {
        return ans[n];
    }

    ans[n] = (fn(n - 1) + fn(n - 2) + fn(n - 3) + fn(n - 4) + fn(n - 5) + fn(n - 6)) % 10000007;
    return ans[n];
}

int main() {
    int n, cases;
    cin >> cases;
    for (int caseno = 1; caseno <= cases; ++caseno) {
        cin >> a >> b >> c >> d >> e >> f >> n;

        ans.assign(n + 1, -1);

        cout << "Case " << caseno << ": " << fn(n) << endl;
    }
    return 0;
}
