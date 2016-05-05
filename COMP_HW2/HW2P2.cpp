#include <iostream>
using namespace std;

int main() {

	int num;
	cout << "Input number : ";
	cin >> num;

	if (10000 < num && num < 100000) {
		cout << num/10000;
		cout << "   " << (num%10000)/1000;
		cout << "   " << (num%1000)/100;
		cout << "   " << (num%100)/10;
		cout << "   " << num%10 << endl;
	}

	return 0;
}
