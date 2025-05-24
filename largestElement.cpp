#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int n){
  int max = arr[0];
  for(int i = 1; i < n; i++) {
    if(max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  int arr[] = {1,2,2,3,8,6,8,56};
  int n = sizeof(arr)/ sizeof(arr[0]);
  cout << "largest element: "<< largest(arr,n) << endl;
  return 0;
}