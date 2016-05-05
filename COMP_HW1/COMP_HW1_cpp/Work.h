#ifndef WORK_H_
#define WORK_H_

#include "Person.h"
using namespace std;

class Work : public Person{
 public:
  Work(string, string, int, string);

  void setTeam(string);
  string getTeam();
  void print();
 private:
  string team;
};

#endif /* WORK_H_ */
