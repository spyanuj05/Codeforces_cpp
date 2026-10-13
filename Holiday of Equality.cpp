#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b ;
	long long  ct = 0;
	cin>>a ;
	vector<int> ax(a);
	for ( int i = 0 ; i<a ;i++){
		cin>>ax[i];
	}
	sort(ax.begin(),ax.end());
	for ( int i = 0 ; i<a ; i++){
		ct += ( ax[a-1]-ax[i]);
	}
	cout<<ct;
	
}
