#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string input;
    getline(cin, input);
    unordered_set<char> ax;
    for ( char &c : input){
    	if ( c>= 'a' && c<= 'z'){
    		ax.insert(c);	
		}
	}
	cout<<ax.size();
}
