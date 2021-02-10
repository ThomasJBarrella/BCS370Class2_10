#include <iostream>
#include <string>

class Customer {
  private:
  int ID;
  std::string name;
  public:
  Customer (int id = 100) {
    ID = id;
    name = "";
  }
  
  void operator+ (int n) {
    ID += n;
    name = "abc";
  }

  int getID() const {
    return ID;
  }

  std::string getName() const {
    return name;
  }

};

//user defined function

//syntax for operator overloading
/*int operator+ (Customer c, int n) {
  c.ID += n;

  return c.ID;
}*/

//pass by reference
/*void operator+ (Customer & c, int n) {
  c.ID += n;
  c.name = "abc";

}*/

int main() {
  Customer john, mary(200);
  //john.ID = 100;

  //john.ID = operator+ (john, 10000);
  //the below looks more professional
 john + 10000;
 mary + 10000;

  std::cout << john.getID() << " " << john.getName() << std::endl;
  std::cout << mary.getID() << " " << mary.getName() << std::endl;
}