#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) 
{
  int last, s_last;
  if(n <= 1) return n;
  last = fibonacci(n-1);
  s_last = fibonacci(n-2);
  return last + s_last;
}

int main() {
  int n;
  cin >> n;
  cout << fibonacci(n);
  return 0;
}

