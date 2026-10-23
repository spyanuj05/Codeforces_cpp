#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	cin>>a ;
	while(a--){
		int b,c,ct = 0;
		cin>>b;
		for ( int i = 0 ; i<b ;i++){
			cin>>c ;
			if ( c == 67 ){
				ct++;
			}
		}
		if( ct >= 1 ){
			cout<<"YES"<<'\n';
		}else{
			cout<<"NO"<<'\n';
		}
	}
	return 0;
}
