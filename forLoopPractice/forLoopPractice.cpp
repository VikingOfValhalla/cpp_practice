#include <iostream>

using namespace std;

void mainFunction () {
	int n = 10;

	for (; n>0; n--)
	{
		cout << n << endl;
		if (n==5)
		{
			cout << " Halfway there!" << endl;
		}
	}	
}

int main () {
	mainFunction();
	return 0;
}
