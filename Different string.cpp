#include <iostream>
using namespace std ;
#include <unordered_set>
#include <string>
#include <algorithm>

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin>>a ;
	while(a--){
		string b ;
		cin>>b ;
		unordered_set<char> ax;
		for (char &c : b){
			ax.insert(c);
		}
		if ( ax.size() == 1){
			cout<<"NO"<<'\n';
		}else{
			cout<<"YES"<<'\n';

			string orginal = b ;
			sort(b.begin(),b.end());
			if ( b == orginal){
				reverse(b.begin(),b.end());
			}
			cout<<b<<'\n';
		}
	}
	return 0 ;
}
