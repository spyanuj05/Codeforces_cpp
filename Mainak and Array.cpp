#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;
    while(a--) {
        int b;
        cin >> b;
        if(b == 1){
            int dummy; 
            cin >> dummy; 
            cout << 0 << '\n';
        } else {
            vector<int> ax(b);
            for(int i = 0; i < b; i++){
                cin >> ax[i];
            }       
            sort(ax.begin(), ax.end());
            cout << ax[b-1] - ax[0] << '\n';
        }
    }  
}
