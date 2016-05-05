#include "Person.h"
#include <string>
#include <sstream>
using namespace std;

Person::Person(string a, string b, int c){
  firstname = a;
  lastname = b;
  phonenumber = c;
}

void Person::setFirstName(string first){
  firstname = first;
}

string Person::getFirstName(){
  return firstname;
}

void Person::setLastName(string last){
  lastname = last;
}

string Person::getLastName(){
  return lastname;
}

void Person::setPhoneNumber(int number){
  phonenumber = number;
}

int Person::getPhoneNumber(){
  return phonenumber;
}

void Person::print(){
  cout << firstname << " " << lastname << "_";
  string call;

  //convert integer value to string
  stringstream ss;
  ss << phonenumber;
  call = ss.str();

  if (phonenumber >= 1000000000) //010-XXXX-XXXX
	call = "0" + call.substr(0,2) + "-" + call.substr(2,4)
	       + "-" + call.substr(6, 4);
  else //02-XXXX-XXXX
	call = "0" + call.substr(0,1) + "-" + call.substr(1,4)
	       + "-" + call.substr(5, 4);

  cout << call;
}
