#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  vector<int> lower(26, 0);
  vector<int> upper(26, 0);
  int count = 0;
  bool odd = 0;
  // to count the frequency of character
  for(int i = 0; i < s.size(); i++) {
    if(s[i] >= 'a') {
      lower[s[i] - 'a']++;
    } else {
      upper[s[i] - 'A']++;
    }
  }
  // to check frequency is odd / even
  for(int i = 0; i < 26; i++) {
    if(lower[i] % 2 == 0) {
      count += lower[i];
    } else {
      count += lower[i] - 1;
      odd = 1;
    }
  }
  for(int i = 0; i < 26; i++) {
    if(upper[i] % 2 == 0) {
      count += upper[i];
    } else {
      count += upper[i] - 1;
      odd = 1;
    }
  }
  cout << count + odd;
  return 0;
}