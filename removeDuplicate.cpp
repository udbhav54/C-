#include<bits/stdc++.h>
using namespace std;

int main() {
  int a[] = {1,1,2,2,2,3,3};
  int n = sizeof(a)/ sizeof(a[0]);
  set<int> st;
  for(int i = 0; i < n; i++) {
    st.insert(a[i]);
  }

  int index = 0;
  for(auto it : st){
    a[index] = it;
    index++;
  }
  cout << index << endl;
  for(int i = 0; i < index; i++) {
    cout << a[i] << " ";
  }
  

  return 0;
}
