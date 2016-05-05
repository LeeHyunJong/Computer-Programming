#ifndef FRIEND_H_
#define FRIEND_H_

#include "Person.h"
using namespace std;

class Friend : public Person{
 public:
  Friend(string, string, int, int);

  void setAge(int);
  int getAge();
  void print();
 private:
  int age;
};

#endif /* FRIEND_H_ */
