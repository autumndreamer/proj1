#include <fstream>
#include <iostream>
using namespace std;

// Calculator
int main()
{
    int a, b;
    char c;
    cin >> a >> c >> b;

    if (c == '+')
        cout << a+b;
    else if (c == '-')
        cout << a-b;
    else if (c == '*')
        cout << a*b;
    else if (c == '/')
        cout << a/b;

    return 0;
}