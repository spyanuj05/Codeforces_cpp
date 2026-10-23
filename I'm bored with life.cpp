#include <iostream>
#include <algorithm> 
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int smaller = min(a, b);
    long long hcf = 1;

    for (int i = 1; i <= smaller; i++) {
        hcf *= i;
    }

    cout << hcf << "\n";

    return 0;
}
