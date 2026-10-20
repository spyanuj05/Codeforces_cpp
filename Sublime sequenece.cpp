#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a ;
	cin>>a ;
	while(a--){
		int b , c;
		cin>>b>>c;
		int sum = 0 ;
		for( int i = 1 ; i<=c ; i++){
			if ( i%2!=0){
				sum += b;
			}else{
				sum -= b ;
			}

		}
		cout<<sum<<'\n';
	}
}
