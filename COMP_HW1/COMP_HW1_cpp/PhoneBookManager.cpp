#include "PhoneBookManager.h"

PhoneBookManager::PhoneBookManager(){
  phonebook.clear();
}


PhoneBookManager::~PhoneBookManager(){
  phonebook.~vector();
}

void PhoneBookManager::addCmd(int key, string a, string b, int c) {

  string input;

  switch(key){
    case 1: {
	  Person *newperson = new Person(a, b, c);
	  //add new person to back of the phone book
	  phonebook.push_back(newperson);
	  break;
    }
    case 2: {
	  cout << "Team name: ";
	  getline(cin, input);

	  //remove all spaces in string
	  while(input.find(' ') != string::npos)
	    input.erase(input.find(' '), 1);

	  Work *newwork = new Work(a, b, c, input);
	  phonebook.push_back(newwork);
	  break;
    }
    case 3: {
	  cout << "Birthday(YYMMDD): ";
	  getline(cin, input);

	  //remove all spaces in string
	  while(input.find(' ') != string::npos)
	  	input.erase(input.find(' '), 1);

	  Family *newfamily = new Family(a, b, c, input);
	  phonebook.push_back(newfamily);
	  break;
    }
    case 4: {
	  int age;
	  cout << "Age: ";
	  cin >> age;
	  getline(cin, input); //Consumes '\n'
	  Friend *newfriend = new Friend(a, b, c, age);
	  phonebook.push_back(newfriend);
	  break;
    }
  }
  cout << "Successfully added new person." << endl;
}

void PhoneBookManager::removeCmd(int index){

  if ((size_t)index >= phonebook.size())
	{ cout << "Person does not exist!" << endl;
  } else {
	phonebook.erase(phonebook.begin()+index-1);
	cout << "A person is successfully deleted from the Phone Book!" << endl;
  }

}

void PhoneBookManager::printCmd(){

  if (phonebook.empty())
	{ cout << "Phone Book is empty!" << endl;
  } else {

	for(vector<Person *>::iterator itr = phonebook.begin(); itr != phonebook.end();
    	itr++){

      (*itr)->print();
      cout << "" << endl;

	}

  }
}
