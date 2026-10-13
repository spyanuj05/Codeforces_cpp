#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin>>a;
	int mis = 0 ;
	int ch = 0 ;
	int cs = 0 ;
	while(a--){
		int b,c ;
		cin>>b>>c ;
		if ( b>c){
			mis++;
		}else if ( c>b){
			ch++;
		}else{
			cs = 0 ;
		}
	}
	if ( mis>ch){
		cout<<"Mishka"<<'\n';
	}else if ( ch>mis){
		cout<<"Chris"<<'\n';
	}else{
		cout<<"Friendship is magic!^^"<<'\n';
	}   
}
