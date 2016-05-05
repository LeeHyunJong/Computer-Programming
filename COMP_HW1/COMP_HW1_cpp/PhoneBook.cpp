#include "PhoneBookManager.h"
#include <stdlib.h>
#include <sstream>
#include <time.h>
using namespace std;


int main(int argc, char **argv){

	PhoneBookManager phonebooklist;
	int key1, key2, i; //i is just for index
	string input, name, firstname, lastname, phonenumber;

	while(true){
	  cout << "CP-2015-18634>";
	  getline(cin, input);

	  if (input.compare("")==0) {
	    cout << "Phone Book" << endl;
	    cout << "1. Add person" << endl;
	    cout << "2. Remove person" << endl;
	    cout << "3. Print phone book" << endl;
	    cout << "CP-2015-18634>";

	    cin >> key1;
	    getline(cin, input); //Consumes '\n'

	    switch(key1){
	      case 1: { //1. Add person
		    cout << "Select Type" << endl;
		    cout << "1. Person" << endl;
		    cout << "2. Work" << endl;
		    cout << "3. Family" << endl;
		    cout << "4. Friend" << endl;
		    cout << "CP-2015-18634>";
		    cin >> key2;
		    getline(cin, input); //Consumes '\n'

		    cout << "Name: ";
		    getline(cin, name);

		    //remove spaces before first name
		    i = 0;
		    while(name[i] == ' '){
		    	name.erase(i, 1);
		    }

		    firstname = name.substr(0, name.find(' '));
		    lastname = name.substr(name.find(' ')+1, name.size());

		    cout << "Phone_number: ";
		    getline(cin, phonenumber);

		    //remove all spaces in string
		    while(phonenumber.find(' ') != string::npos)
		      phonenumber.erase(phonenumber.find(' '), 1);

		    //delete '-' in phoneNumber to convert it to integer type
		    phonenumber.erase(phonenumber.find('-'), 1);
		    phonenumber.erase(phonenumber.find('-'), 1);

		    phonebooklist.addCmd(key2, firstname, lastname, atoi(phonenumber.c_str()));

	 	    break;
	      }
	      case 2: { //2. Remove person
		    int index;
		    cout << "Enter index of person: ";
		    cin >> index;
		    getline(cin, input); //Consumes '\n'

		    phonebooklist.removeCmd(index);

		    break;
	      }
	      case 3: { //3. Print phone book

		    phonebooklist.printCmd();

		    break;
	      }
	    }
	  } if (input.compare("exit")==0) {
		cout << "Bye." << endl;
		break;
	  } if(input.compare("exit") * input.compare("") != 0)
		  cout << "Press enter to go next step!" << endl;
	}

	return 0;
}
