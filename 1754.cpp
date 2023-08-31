#include <iostream>

using namespace std;
using ll = long long;

void solution()
{
	int a,b;
	cin >> a >> b;
	if(a ==0 && b==0){
		cout << "YES" << '\n';
	}
	else if(!a || !b){
		cout << "NO" << '\n';
	}
	else if((a+b)%3 == 0 && !(max(a,b) > 2*min(a,b))){
		cout << "YES" << '\n';
	}
	else{
		cout << "NO" << '\n';
	}
	return;
}

void solve(int n)
{
	while (n--) solution();
	return;
}

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	solve(n);
	return 0;
}
