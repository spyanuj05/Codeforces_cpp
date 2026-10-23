#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin>>a ;
	while(a--){
		int b,c ;
		cin>>b ;
		map<int ,int> ax;
		for(int i=0;i<b;i++){
			cin>>c;
			ax[c]++;

		}
		int sc = 0;
		for(auto const& [key ,val]: ax){
			sc += val/2;
		}
		cout<<sc<<'\n';
	}
}
