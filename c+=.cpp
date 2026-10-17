#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin>>a ;
	while(a--){
		int b,c,d;
		cin>>b>>c>>d;
		int op = 0 ;
		while(max(b,c) <= d){
			if ( b<c ){
				b += c;
			}else{
				c += b;
			}
			op++;
		}
		cout<<op<<'\n';
	}
}
