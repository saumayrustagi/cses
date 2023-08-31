#include <iostream>
#include <map>

using namespace std;
using ll = long long;

void solution()
{
  string s;
  cin >> s;
  map<char, int> charmap;
  for(int i=0; (unsigned long)i<s.size(); i++){
    char c = s[i];
    if(charmap.find(c) != charmap.end()){
      ++charmap[c];
    }
    else{
      charmap[c] = 1;
    }
  }
  map<char, int>::iter iter;
  
  // int single = 0;
  // for(int i = 0; i<26; i++){
    // if(arr[i] & 1){
      // switch(single){
        // case 0:
          // single = 1;
          // break;
        // case 1:
          // cout << "NO SOLUTION" << '\n';
          // return;
        // default:
          // cout << "NO SOLUTION" << '\n';
          // return;
      // }
    // }
  // }
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
