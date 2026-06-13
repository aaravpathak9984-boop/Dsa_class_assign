#include <bits/stdc++.h>

using namespace std;

int main() {

  int t;
  cin >> t;

  while (t--) {

    int n, k;
    cin >> n >> k;

    string s, ans = "YES";
    cin >> s;

    // mthd1

    // for (int i = 0; i < k; i++) {
    //   int cnt = 0;
    //   for (int j = i; j < n; j += k) {

    //     if (s[i] == '1') {
    //       cnt++;
    //     }
    //   }

    //   if (cnt % 2 != 0) {
    //     ans = "NO";
    //     break;
    //   }
    // }

    // mthd2
    vector<int> v(k, 0);

    for (int i = 0; i < n; i++) {

      if (s[i] == '1') {

        v[i % k]++;
      }
    }

    for (int i = 0; i < k; i++) {
      if (v[i] % 2 != 0) {
        ans = "NO";
        break;
      }
    }

    cout << ans << endl;
  }
}