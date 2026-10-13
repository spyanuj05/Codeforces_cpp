#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a ;
	string b ;
	cin>>a ;
	while(a--){
		cin>>b ;
		if ( b == "bca" || b == "cab"){
			cout<<"NO"<<'\n';
		}else{
			cout<<"YES"<<'\n';
		}
	} 
}
