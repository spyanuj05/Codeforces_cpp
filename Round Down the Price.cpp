#include <iostream>
#include <string>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	cin>>a ;
	while(a--){
		string b;
		cin>>b ;
		string c ="1";
		for(int i=1;i<b.length();i++){
			c += '0';
		}
		cout<<stoll(b)-stoll(c)<<'\n';
	}
}
