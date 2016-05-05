#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person {
 public:
  Person(string, string, int);

  void setFirstName(string);
  string getFirstName();

  void setLastName(string);
  string getLastName();

  void setPhoneNumber(int);
  int getPhoneNumber();

  virtual void print();
 private:
  string firstname;
  string lastname;
  int phonenumber;
};



#endif /* PERSON_H_ */
