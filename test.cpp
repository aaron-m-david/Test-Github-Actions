//Aaron David
#include <iostream>
using namespace std;

int main(){
	int x = 0;
	int beta = 002;
	cout << beta << endl;
	int *ptr = &x;
	cout << *ptr << endl;
	x++;
	cout << x << endl;
	cout << *ptr << endl;
	return 0;
}
