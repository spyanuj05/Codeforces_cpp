#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a ;
	string b ;
	cin>>a>>b;
	if ( a<26){
		cout<<"NO";
		return 0 ;
	}
	unordered_set<char> ax ;
	for ( int i = 0 ;i<a ;i++){
		ax.insert(tolower(b[i]));
		
	}
	if ( ax.size() == 26){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
   
}
