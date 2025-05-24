#include<bits/stdc++.h>
using namespace std;

class Customer 
{
  string name;
  int *bal;
  public:
  Customer()
  {
    cout<< "Constructer called";
  }

  Customer(string n, int b) {
    this->name = n;
    bal = new int;
    *bal = b;
  }
  
  ~Customer(){
    delete bal;
    cout << "called";
  }

  void display() {
    cout << name << " " << *bal << endl;
  }

};

int main(){
  Customer a1("Udbhav", 456998);
  a1.display();
}