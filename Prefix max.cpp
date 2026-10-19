#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	cin>>a ;
	while(a--){
		int b;
		cin>>b ;
		vector<int> ax(b);
		for ( int i = 0 ; i<b ;i++){
			cin>>ax[i];
		}
		sort(ax.begin(),ax.end());
		cout<<ax[b-1]*b<<'\n';
	}
}
