#include<bits/stdc++.h>
using namespace std;

int main(){
  int a1[] = {1,1,2,3,5,5,6};
  int a2[] = {1,2,5,6,9};
  int n1 = 7;
  int n2 = 5;
  set<int> st;
  for(int i = 0; i < n1; i++){
    st.insert(a1[i]);
  }
  for(int i = 0; i < n2; i++){
    st.insert(a2[i]);
  }
  int un[st.size()];
  int index = 0;
  for(auto it : st){
    un[index] = it;
    index++;
  }
  for (int i = 0; i < st.size(); i++){
    cout<< un[i] << " ";
  }
  return 0;
}