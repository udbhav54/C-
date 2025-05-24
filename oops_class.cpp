#include<bits/stdc++.h>
using namespace std;

class Student {
  // private:
  public:
  string name;
  int age;
  int roll_number;
  string grade;
  // Function Getter and Setter
  // public:
  // void set_name(string n) {
  //   name = n;
  // }
  // string get_name() 
  // {
  //   return name;
  // }
};

int main()
{
  Student *s = new Student;
  (*s).name = "Udbhav";

  cout<< s->name << " ";

  
}