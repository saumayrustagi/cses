#include <iostream>
// #include <utility>
using namespace std;

int main(){
	int n; cin >> n;
	if(n==2||n==3){
		cout<<"NO SOLUTION";
		return 0;
	}
			
	// int arr[n];
	
	for (int i = 2; i <= n; i+=2){
		cout << i << ' ';
	}
	for (int i = 1; i <= n; i+=2){
		cout << i;
		if(i+2 <= n) cout << ' ';
		else cout << endl;
	}
	
	return 0;
}
