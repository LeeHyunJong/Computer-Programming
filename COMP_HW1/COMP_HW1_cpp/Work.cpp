#include "Work.h"
using namespace std;

Work :: Work(string a, string b, int c, string t) : Person(a, b, c)
{
	team = t;
}


void Work::setTeam(string t){
	team = t;
}

string Work::getTeam(){
	return team;
}

void Work::print(){
	Person::print();
	cout << "_" << team;
}


