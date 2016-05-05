#include <iostream>
#include <string>
using namespace std;

class Employee{
  public:
	Employee(string, string, int);
	void setFirstName(string);
	string getFirstName();
	void setLastName(string);
	string getLastName();
	void setMonthlySalary(int);
	int getMonthlySalary();

  private:
	string firstName;
	string lastName;
	int monthlySalary;
};

Employee::Employee(string a, string b, int s){
	firstName = a;
	lastName = b;
	if (s<=0) {
		monthlySalary = 0;
	}else{
		monthlySalary = s;
	}
}

void Employee::setFirstName(string f){
	firstName = f;
}

string Employee::getFirstName(){
	return firstName;
}

void Employee::setLastName(string l){
	lastName = l;
}

string Employee::getLastName(){
	return lastName;
}

void Employee::setMonthlySalary(int s){
	if (s<=0) {
		monthlySalary = 0;
	}else{
		monthlySalary = s;
	}
}

int Employee::getMonthlySalary(){
	return monthlySalary;
}

int main(int argc, char **argv) {

	Employee employee1("John", "Kim", -500);
	Employee employee2("Sally", "Lee", 2300);

	//multiply 12 to calculate 'yearly' salary
	cout << employee1.getFirstName() << " " << employee1.getLastName()
		<< " : " << employee1.getMonthlySalary() * 12 << endl;
	cout << employee2.getFirstName() << " " << employee2.getLastName()
		<< " : " << employee2.getMonthlySalary() * 12 << endl;

	//raise 10 percent
	employee1.setMonthlySalary(employee1.getMonthlySalary() * 1.1);
	employee2.setMonthlySalary(employee2.getMonthlySalary() * 1.1);

	cout << employee1.getFirstName() << " " << employee1.getLastName()
		<< "(10% raised) : " << employee1.getMonthlySalary() * 12 << endl;
	cout << employee2.getFirstName() << " " << employee2.getLastName()
		<< "(10% raised) : " << employee2.getMonthlySalary() * 12 << endl;

	return 0;
}
