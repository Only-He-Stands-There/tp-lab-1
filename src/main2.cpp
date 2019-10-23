#include "task2.h"

int main()
{
unsigned int val;
unsigned long long val2;
unsigned val3;
cout << "Print your number" << endl;
cin >> val;
if (checkPrime(val) == false)
	cout << "False" << endl;
else
	cout << "True" << endl;
cout << "Print the value" << endl;
cin >> val2;
cout << nextPrime(val2) << endl;
cout << "Print an index" << endl;
cin >> val3;
cout << nPrime(val3) << endl;
return 0;
}
