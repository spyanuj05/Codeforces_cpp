#include <iostream>
using namespace std ;
#include <string>
#include <algorithm>
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a ;
	cin>>a ;
	while(a--){
		int b,c;
		cin>>b;
		string d ;
		cin>>d ;
		cin>>c ;
		string e,f;
		cin>>e>>f;
		string g = "";
		string h = "";
		for ( int i=0 ; i<c ;i++){
			if (f[i]=='V' ){
				g += e[i];
			}else{
				h += e[i];
			}
		}
		reverse(g.begin(),g.end());
		cout<<g<<d<<h<<'\n';
	}
}
