#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long  a,b,c,sum ;
	cin>>a>>b>>c;
	sum = (c*(c+1))/2;
	long long ct = sum*a;
	
	if ( ct > b){
		cout<< ct -b ;
	}else {
		cout<<0;
	}
}
