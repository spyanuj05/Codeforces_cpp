#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin>>a ;
	while(a--){
		int b;
		cin>>b;
		int c;
		int ct = 0 , cd =0,cs=0 ;
		for(int i = 0; i<b ;i++){
			cin>>c;
			if ( c == 0){
				ct++;
			}else if ( c == -1){
				cs ++;;
			}else{
				cd++;
			}
		}
		if ( cs%2!=0){
			cout<<ct+2<<'\n';
		}else{
			cout<<ct<<'\n';
		}
	}
}
