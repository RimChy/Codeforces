#include <iostream>
using namespace std;
string s;
int d[300004], k, i;
main() {
  cin >> s >> i;
  while (i--) {
    cin >> k;
    d[--k]++, d[s.size() - k]--;
  }
  for (k = i = 0; i < s.size(); i++) {
    k += d[i];
    cout << s[(k % 2 ? s.size() - 1 - i : i)];
  }
  return 0;
}
