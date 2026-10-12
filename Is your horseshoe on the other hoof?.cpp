#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> a(4) ;
	for ( int i = 0 ;i<4 ;i++){
		cin>>a[i];
	}
	unordered_set<int> ax( a.begin(),a.end());
	cout<<4-(ax.size());    
}
