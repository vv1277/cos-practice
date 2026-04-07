#include <iostream>
using namespace std;

int sum(int a, int b)
{
    __asm__(
        // Please type the assembly code for sum()
        // You can get the code from objdump -d sum.o
    );
}

int main()
{
    int a, b, c;
    a = 3;
    b = 5;
    c = sum(a, b);
    cout << "c: " << c << endl;

    return 0;
}
