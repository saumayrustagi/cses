#include <iostream>

using namespace std;
using ll = long long;

void solution()
{
	const ll modulo = 1000000007;
	int n;
	cin >> n;
	ll res = 2;
	while (--n){
		res *= 2;
		res %= modulo;
	}
	cout << res << '\n';
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
