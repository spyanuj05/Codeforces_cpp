#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;
    while (a--) {
        int b, c;
        cin >> b;
        int ct = 0;
        for (int i = 0; i < b; i++) {
            cin >> c;
            ct += c;
        }
        if (ct >= b) {
            cout << (ct - b) << '\n';
        } 
        else {
            cout << 1 << '\n';
        }
    }
    return 0;
}
