#include<bits/stdc++.h>
using namespace std;

int maximumOnes(int a[], int n){
  int count = 0, maxi = 0;
  for(int i =0; i < n; i++) {
    if(a[i] == 0){
      maxi = max(maxi,count);
      count = 0;
    } else {
      count += 1;
    }
  }
  return max(maxi,count);
}

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << maximumOnes(a, n); 
  return 0;
}