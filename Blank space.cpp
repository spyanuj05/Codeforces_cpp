#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a ;
	cin>>a ;
	while(a--){
		int b ;
		cin>>b ;
		int cur = 0 ;
		int maxz = 0 ;
		for ( int i = 0 ; i<b ; i++){
			int c ;
			cin>>c ;
			
			if ( c == 0 ){
				cur++;
				maxz = max( cur , maxz);
			}else{
				cur = 0 ;
			}
		}
		cout<<maxz<<'\n';
	}
}
