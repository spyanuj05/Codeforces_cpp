#include <iostream>
using  namespace std;
#include <cmath>
#include <algorithm>

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a ;
	cin>>a ;
	while(a--){
		int b,c,d;
		cin>>b>>c>>d;
		cout<<min({abs(b-c),abs(c-d),abs(b-d)})<<'\n';
	}
}
