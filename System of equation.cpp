#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    int a = 0, ct = 0; // Fix 1: Initialized 'a' to 0

    while(a * a <= n){
        int b = n - (a * a); // Fix 2: Changed 'b' to 'n'
        
        if(a + (b * b) == m){
            ct++;
        }
        
        a++; // Fix 3: Added 'a++' to prevent an infinite loop
    }
    
    cout << ct;
    return 0;
}
