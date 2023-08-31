#include <iostream>

using ll = long long;
using namespace std;

void solution()
{
	int y, x;
	cin >> y >> x;
	ll z = max(x,y);
	ll z2 = z*z;
	ll diagonal = z2 - z + 1;
	if(x==y) {
		cout << diagonal << '\n';
		return;
	}
	if(z2&1){
		if(y>x){
			cout << diagonal - abs(y - x);			
		}
		else{
			cout << diagonal + abs(y - x);
		}
	}
	else{
		if(y > x){
			cout << diagonal + abs(y - x);
		}
		else{
			cout << diagonal - abs(y - x);			
		}
	}
	cout << '\n';
	return;
}

void solve(int n)
{
	while (n--) solution();
	return;
}

int main(int argc, char *argv[])
{
	int t; cin >> t;
	solve(t);
	return 0;
}
