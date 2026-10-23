#include <iostream>
#include <string>
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;
    while(a--){
        int b;
        char x;
        string c;
        

        cin >> b >> x;
        cin >> c;
        
        bool inserted = false;
        for(int i = 0; i < b; i++){
            
            if(c[i] < x){
            
                c.insert(i, 1, x);
                inserted = true;
                break;
            }
        }
        
        if(!inserted){
            c.push_back(x);
        }
        
        cout << c << '\n';
    }
    return 0;
}
