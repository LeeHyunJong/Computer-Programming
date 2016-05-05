#ifndef PHONEBOOKMANAGER_H_
#define PHONEBOOKMANAGER_H_

#include "Person.h"
#include "Work.h"
#include "Family.h"
#include "Friend.h"
#include <vector>

class PhoneBookManager{
 public:
  PhoneBookManager();
  ~PhoneBookManager();
  void addCmd(int, string, string, int);
  void removeCmd(int);
  void printCmd();
 private:
  vector<Person *> phonebook;
};

#endif /* PHONEBOOKMANAGER_H_ */
