#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n; 
        string b, d;
        cin >> b >> d;
        
        for(int i = 0; i < n; i++) {
            if (b[i] == 'G') b[i] = 'B';
            if (d[i] == 'G') d[i] = 'B';
        }
        
        if (b == d) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
