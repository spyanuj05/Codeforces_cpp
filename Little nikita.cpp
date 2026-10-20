#include <iostream>
using namespace std;

int main(){
	int a;
	cin>>a ;
	while(a--){
		int b,c;
		cin>>b>>c;
		// Added the condition: (b - c) % 2 == 0
		if (c <= b && (b - c) % 2 == 0){
			cout<<"YES"<<'\n';
		}else{
			cout<<"NO"<<'\n';
		}
	}
}
