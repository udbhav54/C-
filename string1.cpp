#include<bits/stdc++.h>
using namespace std;
// int main() 
// {
//   // char arr[] = {'a','p','p','l','e'};
//   // for (int i = 0; i < 5; i++)
//   // {
//   //   cout << arr[i] ;
//   // }

//   // cout << arr;

//   char arr[10];
//   cin >> arr;
//   arr[2] = '\0';
//   cout << arr;
  
// }

// int main() {
//   string s;
//   cin >> s;
//   cout << s;
// }

// int main() {
//   string s;
//   getline(cin, s);
//   cout << s << endl;
//   cout << s.size();
// }

// int main() {
//   string s1,s2;
//   getline(cin, s1);
//   getline(cin,s2);
//   string s3 = s1 + s2;
//   cout << s3;
//   s3.push_back('f'); // only for single char...

//   // for string
//   // s3.append("false");

//   s3 += " false";
//   cout << s3;
  
// }

// int main() {
//   // escape char
//   string s = "sai sapndan is a good \"boy\" and  handsome.";
//   cout << s;
// }

// int main() {
//   string s = "\"";
//   cout << s;

// }

// reverse string
// int main() {
//   string s;
//   cin >> s;
//   int start = 0;  
//   int end = s.size() - 1;
//   while(start < end) {
//     swap(s[start], s[end]);
//     start++;
//     end--;
//   }
//   cout << s;
//   // return 0;
// }

// count string size without using inbuilt function
// int main() {
//   string s;
//   cin >> s;
//   int size = 0;
//   while(s[size] != '\0') {
//     size++;
//   };
//   cout <<  size;
//   return 0;
// }

// palindrome

int main() {
  string s;
  cin>> s;
  int st = 0, e = s.size() - 1;
  while(st < e) {
    if(s[st] != s[e]) {
      cout << "not";
      return 0;
    }
    st++;
    e--;
  }
  cout<< "yes";
  // cout<< "";
  string arr[] = {"file_1" , "file_2", "file_3"};
  int length = arr[2].size();
  cout<< arr[2][length-1];
}


