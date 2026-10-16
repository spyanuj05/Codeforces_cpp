#include <iostream>

using namespace std;

#include <vector>

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin>>a ;
	if ( a==0 ){
		cout<<0;
	}
	int ct = 1 , ma_x = 1;
	vector<long long> arr(a);
	for ( int i = 0 ; i<a ; i++){
		cin>>arr[i];
	}
	for ( int i = 0 ; i<a ;i++){
		if (arr[i]>arr[i-1]){
			ct++;
			ma_x = max( ma_x ,ct);
		}else{
			ct=1;
		}
	}
	cout<<ma_x;
}
