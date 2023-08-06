#include <iostream>
#include <utility>
using namespace std;

int main(){
	int n; cin >> n;
	long long arr[n];
	
	for(int i = 0, inp; i < n; i++){
		cin >> inp; arr[i] = inp;
	}
	
	long long moves=0;
	for(int i = 0; i<n-1; i++){
		if( arr[i] > arr[i+1] ){
			moves += arr[i]-arr[i+1];
			arr[i+1] = arr[i];
		}
	}
	cout << moves;
	return 0;
}
