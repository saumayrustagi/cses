#include <iostream>
#include <utility>
using namespace std;

int main(){
	string s; cin >> s;
	int longest = 1;
	int running_long = 1;
	
	char prev=s[0];
	for(int i = 1; (unsigned)i < s.size(); i++){
		if(s[i] == prev){
			++running_long;
		}
		else{
			longest = max(longest, running_long);
			running_long = 1;
		}
		prev = s[i];
	}
	longest = max(longest, running_long);
	cout << longest;
	return 0;
}
