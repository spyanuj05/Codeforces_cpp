#include <iostream>
using namespace std;
#include <algorithm>

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin>>a ;
    while(a--){
        string b ;
        cin>>b ;
        int i = 0 ;
        while(i<b.size()-1){
            cout<<b[i];
            if (b[i] == b[i+1]){
                i+=2;
            }else{
                i++;
            }
        }
        if ( i == b.size()-1){
            cout<<b[i]<<'\n';
        }
    }
}
