#include<bits/stdc++.h>
using namespace std;
  // Brute Force
// int missing(int a[], int n) {
//   for(int i = 1; i <= n; i++) {
//     int flag = 0;
//     for(int j = 0; j < n; j++ ) {
//       if(a[j] == i){
//         flag = 1;
//         break;
//       }
//     }
//     if(flag == 0)return i;
// }
// }

// Better
// int missing(int a[], int n) {
//   int hash[n+1] = {0};
//   for(int i = 0; i < n; i++) {
//     hash[a[i]]++;
//   } 
//   for(int i = 1; i < n; i++){
//     if(hash[i] == 0) return i;
//   }
// }

// optimal 1
// int missing(int a[], int n){
//   int sum1 = 0, sum2 = 0;
//   for(int i = 0; i < n - 1; i++) {
//     sum2 += a[i];
//   }
//   sum1 = (n * (n + 1)) / 2;
//   return (sum1 - sum2);
// }

// optimal 2
// int missing(int a[], int n){
//   int xor1 = 0, xor2 = 0;
//   for(int i = 0; i < n-1; i++){
//     xor1 ^= a[i];
//   }
//   for(int i =1; i <= n; i++){
//     xor2 ^= i;
//   }
//   return xor1^xor2;
// }

int missing(int a[], int n){
  int xor1 = 0, xor2 = 0;
  for(int i =0; i < n-1; i++){
    xor2 ^= a[i];
    xor1 ^= (i+1);
    
  }
  xor1 ^= n;
  return xor1^xor2;
}

int main() {
  int a[] = {1,2,4,5};
  int n = 5;
  cout << missing(a, n);
  return 0;
}