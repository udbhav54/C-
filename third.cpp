#include<bits/stdc++.h>
using namespace std;
// package
// int main() {
//   int package;
//   cin >> package;
//   if(package > 10) {
//     cout << "Accepted";
//   } else {
//     cout << " Rejected";
//   }
//   return 0;
// }

// marks

// int main() {
//   int marks;
//   cin >> marks;
//   if(marks > 33) {
//     cout << "pass";
//   } else {
//     cout << "fails";
//   }
//   return 0;
// }

// comparision

// int main() {
//   int a, b;
//   cin >> a >> b;
//   if(a > b) {
//     cout << a; 
//   } else {
//     cout << b;
//   }
//   return 0;

// }

// even or odd

// int main() {
//   int num;
//   cin >> num;
//   if(num % 2 == 0) {
//     cout << "yes";
//   } else { 
//     cout << " no";
//   }
//   return 0;
// }

// check number + - 0

// int main() {
//   int num;
//   cin >> num;
//   if(num > 0 ) {
//     cout << "Positive";
//   } else if(num == 0) {
//     cout << "Zero";
//   } else {
//     cout << "Negative";
//   }
//   return 0;
// }


// Vowel and consonant

// int main() {
//   char alphabet;
//   cin >> alphabet;
//    if( alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ){
//     cout << " Vowels";
//    } else {
//     cout << "Consonants";
//    }
//    return 0;
// }

// print a weeksdays with number
int main() {
  int num;
  cin >> num;
  if(num == 1 ) {
    cout << num << ". MONDAY";
  } else if (num == 2)
  {
    cout << num << ". TUESDAY";
  } else if(num == 3) {
    cout << num << ". WEDNESDAY";
  }
  else if(num == 4) {
    cout << num << ". THRUSDAY";
  }
  else if(num == 5) {
    cout << num << ". FRIDAY";
  }
  else if(num == 6) {
    cout << num << ". SATURDAY";
  } else {
    cout << num << ".SUNDAY";
  }
  return 0;
}
