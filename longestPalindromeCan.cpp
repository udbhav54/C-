#include<bits/stdc++.h>
using namespace std;

int main() {
  string str[] = {"ab","ty","yt","lc","cl","ab"};
  int count = 0;

  // map inti, insertion
  unordered_map<string, int> map;
  int unpaired = 0, ans = 0;
  for(auto &s : str) {
    if(s[0] == s[1]) {
      if(map[s] > 0) {
        ans += 4;
        unpaired -= 1;
        map[s] -= 1;
      } else {
        unpaired += 1;
        map[s] += 1;
      }
    } else {
      string rev = s;
      reverse(rev.begin(), rev.end());
      if(map[rev] > 0) {
        ans += 4;
        map[rev] -= 1;
      } else {
        map[s]++;
      }
    }
  }
  if(unpaired > 0) {
    ans += 2;
  }
    
cout << ans;
  return 0;
}