#include <cstdint>
#include <iostream>

using namespace std;
int main()
{
	long a;
	int64_t b;
	a = 0x1234567890;
	b = 0x1234567890;

	cout << "sizeof(a): " << sizeof(a) << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	return 0;
}
