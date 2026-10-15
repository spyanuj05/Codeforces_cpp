#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin>>a ;
	int arr[a];
	for ( int i = 0; i<a ;i++){
		cin>>arr[i];
	}
	sort(arr,arr+a);
	for ( int i = 0;i<a ;i++){
		cout<<arr[i]<<" ";
	}
}
