#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	cin>>a ;
	int b;
	while(a--){
		cin>>b;
		for ( int i = 2 ; i<30 ;i++){
			int val = (1<<i)-1;
			if (b%val == 0){
				cout<<b/val<<'\n';
				break ;
			}
		}
	}
	return 0 ;
}
