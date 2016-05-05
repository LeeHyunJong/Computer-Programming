#include <iostream>
using namespace std;

int main(int argc, char **argv) {

	int powValue = 1;

	while(true){
		powValue *= 2;
		cout << powValue << endl;
	}

	//2^30 = 1073741824
	//2^31 = -2147483648
	//after that, print 0

	return 0;
}
