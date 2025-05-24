// #include<bits/stdc++.h>
// using namespace std;
// int mycount = 0;
// void fun_print() {
//   if(mycount == 3) return;
//   cout << mycount << endl;
//   mycount++;
//   fun_print();
// }

// int main() {
//   fun_print();
//   return 0;
// }




#include<bits/stdc++.h>
using namespace std;

// Print name 5 times -> Udbhav

// int cnt = 0;
// void print_name(string name) {
//   if(cnt == 5) return;
//   cout << name << endl;
//   cnt++;
//   print_name(name);
// }
// int main() {
//   string name = "Udbhav";
//   print_name(name);
//   return 0;
// }

// Print from 1 to N

// void print_num(int n, int N) {
//   if(N == 0) return;
//   cout << n << endl;
//   n++;
//   N--;
//   print_num(n, N);
// }

// int main(){
//   int N, n = 1;
//   cin >> N;
//   print_num(n, N);
//   return 0;
// }

// Print N to 1

// void print_num(int N) {
//   if(N == 0) return;
//   cout << N << endl;
//   N--;
//   print_num(N);
// }

// int main() {
//   int N;
//   cin >> N;
//   print_num(N);
//   return 0;
// }


// Print linearly from 1 to N (But By BackTracking)

// void fun(int i, int N) {
//   // Base condition
//   if(i < 1) return;
//   fun(i - 1, N);
//   cout << i << endl;
// }

// int main() {
//   int N;
//   cin >> N;
//   fun(N, N);
//   return 0;
// }


// Print from N to 1 Linearly (By using BackTracking)

// void fun(int i, int N) {
//   if(i > N) return;
//   fun(i+1,N);
//   cout << i << endl;
// }

// int main() {
//   int N;
//   cin >> N;
//   fun(1, N) ;
//   return 0;
// }

// Sum of First N numbers

// int fun_sum(int N) {
//   if(N == 0)return 0;
//   return N+fun_sum(N-1);
// }

// int main() {
//   int N;
//   cin >> N;
//   cout << (fun_sum(N));
//   return 0;
// }

// Factorial of N
int fact(int n)
{
  if(n == 0 || n == 1) return 1;
  return n*fact(n-1);
}
int main() {
  int n;
  cin >> n;
  cout << fact(n);
  return 0;
}