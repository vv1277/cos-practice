

//recap.cpp

#include <iostream>
using namespace std;

int main ()
{
	int a;
	cout << "Enter fisrt number: ";
	cin >> a;

	int b;
	cout << "Enter second number: ";
	cin >> b;

	int x, sum;

	if (a<b) {
		x=a;
		sum=0;

		while (x<=b) {
			sum=sum+x;
			x++;
		}

		cout<< "sum: " << sum << endl;
	}else{
		cout << "program end" << endl;
	}

	return 0;
}



