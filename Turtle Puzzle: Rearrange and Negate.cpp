#include <iostream>
#include <cmath>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin>>a ;
	while(a--){
		int b,c;
		cin>>b ;
		int ct =0;
		for(int i =0 ;i<b ;i++){
			cin>>c;
			ct += abs(c);
		}
		cout<<ct<<'\n';
	}
}
