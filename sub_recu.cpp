#include<bits/stdc++.h>
using namespace std;

void sub(int i, vector<int> &ds, int a[], int n) 
{
  if(i >= n) {
    for(auto it : ds) {
    cout << it << " ";
    }
    if(ds.size() == 0) {
      cout << "{}";
    }
    cout << endl;
    return;
  }
  
  // take or pick the particular index into the subsequence
  ds.push_back(a[i]);
  sub(i+1, ds, a, n);
  ds.pop_back();

  // not take or not pick conditon, this elemnt is not added to your subsequence
  sub(i+1, ds, a, n);
}

int main(){
  int n = 3;
  int a[] = {3,1,2};
  vector<int>ds;
  sub(0, ds, a, n);
  return 0;
}