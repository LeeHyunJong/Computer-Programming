/*
 * Friend.cpp
 *
 *  Created on: 2016. 4. 20.
 *      Author: USER
 */

#include "Friend.h"
using namespace std;

Friend::Friend(string a, string b, int c, int d) : Person(a, b, c){
  age = d;
}

void Friend::setAge(int a){
  age = a;
}

int Friend::getAge(){
  return age;
}

void Friend::print(){
  Person::print();
  cout << "_" << age;
}


