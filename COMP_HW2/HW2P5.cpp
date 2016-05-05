#include <iostream>
using namespace std;

#define product1 2.98
#define product2 4.50
#define product3 9.98
#define product4 4.49
#define product5 6.87

int main(int argc, char **argv) {

	int sold[5] = {0}; //quantity sold

	char product; //product number
	int quantity;
	double totalPrice;

	cout << "product number : ";
	cin >> product;

	//input 'x' or 'X' -> terminate
	while(product != 'x' && product != 'X'){

		cout << "quantity : ";
		cin >> quantity;

		switch(product){
		  case '1':
			sold[0] += quantity;
			break;
		  case '2':
			sold[1] += quantity;
			break;
		  case '3':
			sold[2] += quantity;
			break;
		  case '4':
			sold[3] += quantity;
			break;
		  case '5':
			sold[4] += quantity;
			break;
		  default:
			cout << "There is not correspondent product." << endl;
		}
		cout << "product number : ";
		cin >> product;
	}

	totalPrice = product1 * sold[0] + product2 * sold[1] +
			product3 * sold[2] + product4 * sold[3] + product5 * sold[4];

	cout << "total retail price : " << totalPrice << '$' << endl;

	return 0;
}

