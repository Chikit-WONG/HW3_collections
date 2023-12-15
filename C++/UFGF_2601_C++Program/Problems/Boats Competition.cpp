#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> w(n);
        for (int i = 0; i < n; i++) {
            cin >> w[i];
        }
        sort(w.begin(), w.end());
        int ans = 0;
        for (int s = 2; s <= 2 * n; s++) {
            int cnt = 0;
            int i = 0, j = n - 1;
            while (i < j) {
                if (w[i] + w[j] == s) {
                    cnt++;
                    i++;
                    j--;
                } else if (w[i] + w[j] < s) {
                    i++;
                } else {
                    j--;
                }
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
    return 0;
}