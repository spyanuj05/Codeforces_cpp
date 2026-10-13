#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    int a, c;
    string b;
    cin >> a;
    while (a--) {
        cin >> c >> b;
        sort(b.begin(), b.end());
        if (b == "Timru") {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
