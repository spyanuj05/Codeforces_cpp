#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,c ;
	cin>>a ;
	while(a--){
		unordered_set<int> ax;
		for ( int i = 0 ; i<4 ;i++){
			cin>>c;
			ax.insert(c);
		}
		if (ax.size()==1){
			cout<<"YES"<<'\n';
		}else{
			cout<<"NO"<<'\n';
		}
	}
}
