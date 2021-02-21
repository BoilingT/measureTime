#include <iostream>
#include "chronoTime.h"

using namespace std;

int main() {

	chronoTime time;
	system("pause");
	time.start();

	for (int i = 0; i < 10000; i++)
	{
		cout << i << endl;
	}

	time.end();
	float difference = time.getDifference();
	cout << "D: " << difference/1000 << endl;
	//Hello
	return 0;
}