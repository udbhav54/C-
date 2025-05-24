#include<bits/stdc++.h>
using namespace std;

class Teacher {
  public:
  //Properties // attributes

  Teacher(){
    cout<<"hii i'm constructor";
  }
  string name;
  string dept;
  string subject;
  double salary;


  //methods//memeber functions
  void changeDept(string newDept) {
    dept = newDept;
  }

};

int main() {
  Teacher t1; // CONSTRUCTOR CALL
  t1.name = "abc";
  t1.subject = "cs";
  t1.dept = "cse";
  t1.salary = 154526.55;
  cout << t1.name;
  return 0;
}