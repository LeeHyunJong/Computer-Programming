#ifndef FAMILY_H_
#define FAMILY_H_

#include "Person.h"
using namespace std;

class Family : public Person {
 public:
  Family(string, string, int, string);

  void setBirthday(string); //YYMMDD
  string getBirthday();
  int dDay();
  void print();
 private:
  string birthday;
};

#endif /* FAMILY_H_ */
