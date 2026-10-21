#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	cin>>a ;
	while(a--){
		int b,c ;
		cin>>b;
		unordered_set<int> ax;
		for(int i=0;i<2*b;i++){
			cin>>c;
			if ( ax.find(c)==ax.end()){
				cout<<c<<" ";
				ax.insert(c);

			}
		}
		cout<<'\n';
	}
}
