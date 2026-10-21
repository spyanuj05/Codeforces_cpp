#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	cin>>a;
	while(a--){
		int ct = 0;
		vector<int> ax(7);
		for(int i=0;i<7;i++){
			cin>>ax[i];
			ct -= ax[i];
		}
		sort(ax.begin(),ax.end());
		cout<<ct+2*ax[6]<<'\n';

	}
}
