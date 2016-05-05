#include "Family.h"
#include <time.h>
#include <stdlib.h>
using namespace std;


Family::Family(string a, string b, int c, string birth) : Person(a, b, c){
  birthday = birth;
}

void Family::setBirthday(string birth){
  birthday = birth;
}

string Family::getBirthday(){
  return birthday;
}

//I uses <time.h> header file to calculate exact dDay
int Family::dDay(){

  //convert birthday to integer value
  int year = atoi(birthday.substr(0,2).c_str());
  int month = atoi(birthday.substr(2,2).c_str());
  int day = atoi(birthday.substr(4,2).c_str());

  time_t now;
  time (&now); //get current date

  //set birth value to indicate birthday
  struct tm *birth;
  birth = localtime(&now);
  birth->tm_year = year; //YY(after 1900)
  birth->tm_mon = month-1; //0 <= tm_mon <= 11
  birth->tm_mday = day; //1-31

  //calculate time between birthday and now in seconds
  double seconds = difftime(now, mktime(birth));
  //convert seconds to days
  int dDay = seconds / (24 * 60 * 60);

  return dDay;
}

void Family::print(){
  Person::print();
  cout << "_" << birthday << "_" << this->dDay();
}



