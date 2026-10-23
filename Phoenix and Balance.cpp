#include <iostream>
using namespace std;
#include <vector>
#include <cmath>
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a ;
	cin>>a ;

	while(a--){
		int b ;
		cin>>b ;
		vector<long long> ax;
		if (b==2){
			cout<<2<<'\n';
		}else if (b>4){
			vector<int> ax;
			for(int i = 1 ;i<=b ;i++){
				int res = 1<<i;
				ax.push_back(res);
			}
			long long as = 0;
			long long ps = 0;
			for(int i = 0 ;i<b ;i++){
				if(i>=((b-1)/2)&& i<(b-1)){
					as += ax[i];
				}else{
					ps += ax[i];
				}
			}
			cout<<abs(as-ps)<<'\n';

		}else{
			cout<<6<<'\n';
		}
		
	}
}
