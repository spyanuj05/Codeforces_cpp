#include <iostream>
using namespace std ;
#include <vector>
#include <cmath>
#include <algorithm>
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a,b;
	cin>>a>>b;
	int sum = 0 ;
	vector<int> ax;

	while(a--){
		int c ;
		cin>>c;
		if(c<0){
			ax.push_back((c));
		}
	}
	sort(ax.begin(),ax.end());

	for(int i = 0 ; i<b && i < ax.size()  ; i++){
		sum += ax[i];
	}
	cout<<abs(sum);	
}
