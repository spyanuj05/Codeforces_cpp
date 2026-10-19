#include <iostream>
#include <algorithm>
using namespace std ;
#include <string>
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a ;
	cin>>a;
	while(a--){
		int b ;
		cin>>b ;
		string c ;
		string d ;
		cin>>c>>d;
		sort(c.begin(),c.end());
		sort(d.begin(),d.end());
		if ( c == d ){
			cout<<"YES"<<'\n';
		}else{
			cout<<"NO"<<'\n';
		}

	}
}
