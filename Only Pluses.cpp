#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin>>a ;
	while(a--){
		vector<int> ax(3) ;
		cin>>ax[0]>>ax[1]>>ax[2];
		for ( int i = 0 ; i<5 ; i++){
			sort(ax.begin(),ax.end());
			ax[0]++;
		}
		cout<<ax[0]*ax[1]*ax[2]<<'\n';
	}
	  
}
