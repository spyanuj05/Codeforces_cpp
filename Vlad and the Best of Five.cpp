#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin>>a ;
	while(a--){
		string b ;
		int ct = 0;
		int cd = 0 ;
		cin>>b ;
		for(char &c : b){
			if ( c == 'A'){
				ct++;
			}else{
				cd++;
			}
		}
		if(ct>cd){
			cout<<"A"<<'\n';
		}else{
			cout<<"B"<<'\n';
		}
	}
}
