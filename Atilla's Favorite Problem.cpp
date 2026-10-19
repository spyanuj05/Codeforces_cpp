#include <iostream>
using namespace std;
#include <algorithm>
#include <string>

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin>>a ;
	while(a--){
		int b ;
		cin>>b ;
		string c;
		cin>>c ;
		sort(c.begin(),c.end());
		int x = c[b-1]-'a'+1;
		cout<<x<<'\n';
	}
}
