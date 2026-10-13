#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c;
	cin>>a ;
	while(a--){
		cin>>b>>c;
		if ( b>c){
			cout<<c<<" "<<b<<'\n';
		}else{
			cout<<b<<" "<<c<<'\n';
		}
	} 
}
