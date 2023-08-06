#include <iostream>
// #include <boolean>
using namespace std;

int main(){
	int n; cin>>n;
	bool arr[n];
	for(int i = 0; i < n; i++) arr[i]=false;
	
	for(int i = 0, inp; i < n-1; i++){
		cin >> inp;
		arr[inp-1] = true;
	}
	for(int i = 0; i < n; i++){
		if(!arr[i]){
			cout << i+1;
		}
	}
	return 0;
}
