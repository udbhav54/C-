#include<bits/stdc++.h>
using namespace std;

void move_zero(int a[], int n) {
  int count = 0;
  int index = 0;
  for (int i = 0; i < n; i++)
  {
    if(a[i] != 0) {
      a[index] = a[i];
      index++;
    } else{
      count++;
    }
  }
  for(int i = index; i < n; i++){
      a[i] = 0;
    }
}

int main(){
  int a[] = {1,0,2,3,2,0,0,4,5,1};
  int n = sizeof(a)/ sizeof(a[0]);
  move_zero(a,n);
  for (int i = 0; i < n; i++)
  {
    cout<< a[i] << " ";
  }
  return 0;
}