#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c,d;
	cin>>a ;
	while(a--){
		cin>>b>>c>>d;
		if ( b+c>=10||c+d>=10 || b+d>=10){
			cout<<"YES"<<'\n';
		}else{
			
			cout<<"NO"<<'\n';
		}
	} 
}
