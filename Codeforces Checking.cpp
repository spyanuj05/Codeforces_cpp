#include <iostream>
#include  <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a ;
	cin>>a ;
	string b ;
	while(a--){
		cin>>b ;
		for ( char &c : b){
			if ( c == 'c'|| c == 'o'|| c == 'd'|| c == 'e'|| c == 'f'|| c == 'r'|| c == 's'){
				cout<<"YES"<<'\n';
			}else{
				cout<<"NO"<<'\n';
			}
		}
	}   
}
