#include <iostream>
using namespace std ;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	string b,c,d;
	cin>>a ;
	while(a--){
		cin>>b>>c>>d;
		cout<<b[0]<<c[0]<<d[0]<<'\n';
	}
}
