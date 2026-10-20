#include <iostream>
using namespace std;

int  main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin>>a ;
	long long md = 1;
	long long mx = 1;
    
	for(int i = 0 ; i < a - 1; i++){
		mx *= (a + i);  
		md *= (i + 1);  
	}
    
	cout << mx / md; 
}
