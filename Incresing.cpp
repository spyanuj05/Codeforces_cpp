#include <iostream>
using namespace std;
#include <unordered_set>

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c;
	cin>>a ;
	while(a--){
		int b ;
		cin>>b;
		unordered_set<int> ax;
		for ( int i = 0 ; i<b ;i++){
			cin>>c;
			ax.insert(c);
		}
		if ( ax.size()!=b){
			cout<<"NO"<<'\n';
		}else{
			cout<<"YES"<<'\n';
		}
	}
}
