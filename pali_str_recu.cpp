#include<bits/stdc++.h>
using namespace std;

bool pali(int i, string str, int n)
{
  if(i >= n/2) return true;
  if(str[i] != str[n-1-i]) return false;
  return pali(i+1, str, n);
}

int main() {
  int n;
  cin >> n;
  string str;
  cin >> str;
  int res = pali(0, str, n);
  if(res == 0) {
    cout << "False";
  } else {
    cout << "True";
  }
  // cout << pali(0, str, n);
  return 0;

}