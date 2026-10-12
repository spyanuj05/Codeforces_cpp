#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	string b ;
	string c ;
	cin>>a ;
	while(a--){
		cin>>b>>c ;
		swap(b[0],c[0]);
		cout<< b << " "<< c <<'\n';
	}
	return 0 ;  
}
