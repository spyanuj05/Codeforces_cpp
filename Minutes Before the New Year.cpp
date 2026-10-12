#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c;
	cin>>a ;
	while(a--){
		cin>>b>>c;
		cout<<1440-(b*60+c)<<'\n';
	}
}
