#include<bits/stdc++.h>
using namespace std;

void pairs() {

  pair<int, int> p = {1,3};
  cout << p.first << " " << p.second << endl;

}

void nestedPair() {
  pair<int , pair<int, int>> pa = {1, { 3, 4}};
  cout << pa.first << " " << pa.second.first << " " << pa.second.second << endl;
}

void arrayPair() {
  pair<int, int> arr[] = {{6,9},{7,8},{1,2}};
  cout << arr[2].second << endl << arr[0].first;
}
int main() {
  pairs();
  nestedPair();
  arrayPair();
  return 0;
}