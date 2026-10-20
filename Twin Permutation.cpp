#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;
        vector<int> ax(b);
        for (int i = 0; i < b; i++) {
            cin >> ax[i];
        }
        
        for (int i = 0; i < b; i++) {
            cout << (b + 1 - ax[i]) << " ";
        }
        cout << "\n"; 
    }
    return 0;
}
