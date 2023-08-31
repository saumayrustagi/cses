#include <iostream>

using namespace std;
using ll = long long;

void solution()
{
	ll n;
	cin >> n;
	int trail = 0;
	while(n){
		trail += n/5;
		n /= 5;
	}
	cout << trail << '\n';
	return;
}

void solve(int n)
{
	while (n--) solution();
	return;
}

int main(int argc, char *argv[])
{
	solve(1);
	return 0;
}
