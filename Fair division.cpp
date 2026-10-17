#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int count1 = 0, count2 = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        int w;
        cin >> w;
        if (w == 1) {
            count1++;
            sum += 1;
        } else {
            count2++;
            sum += 2;
        }
    }
    if (sum % 2 != 0) {
        cout << "NO\n";
    } else {
        int half = sum / 2;
        if (half % 2 == 0 || count1 > 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
