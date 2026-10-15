#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c,d,e;
	cin>>a ;
	while(a--){
		cin>>b>>c>>d>>e;
		if ( b==c && c==d && d==e){
			cout<<"YES"<<'\n';
		}else{
			cout<<"NO"<<'\n';
		}
		
	}    
}
