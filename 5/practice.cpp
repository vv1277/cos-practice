#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    char str1[6] = {'h', 'e', 'l', 'l', 'o', 0};
    char str2[6] = {'w', 'o', 'r', 'l', 'd', 0};
    char *p;
    int i;

    p = str2;

    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;

    // Do something. Can you make the program to print “hello,world” (no space) below? (only add one line with regard to the pointer p and the assignment statement)

    // Please refer to the result of “pointer-5”

    cout << "str1 = " << str1 << endl;

    return 0;
}
