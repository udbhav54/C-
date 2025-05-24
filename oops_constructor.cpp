#include<bits/stdc++.h>
using namespace std;

class Customer 
{
  
  string name;
  int account_number;
  int balance;
  // Default constructer

  public:
  // Customer() {
  //   cout << "Constructer called";
  // }

  // parametrized constructer
  
  Customer(string name, int account_number, int balance) {
    this->name = name;
    this->account_number = account_number;
    this->balance = balance;
  }
  
  // constructor overloading
  // Customer(string name, int account_number) {
  //   this->name = name;
  //   this->account_number = account_number;
  //   this-> balance = 50;
  // }

  // inline constructor
  // inline Customer(string a, int b, int c) : name(a), account_number(b), balance(c){}

  Customer(Customer &B) {
    name = B.name;
    account_number = B.account_number;
    balance = B.balance;
  }

  void display() {
    cout << name << " " <<  account_number << " " << balance;
  }
};
int main(){
  Customer a1("Udbhav", 1, 569);
  // a1.display();
  // Customer a2("rohit", 5);
  // a2.display();
  Customer a3(a1);
  a3.display();
}