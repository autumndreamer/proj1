#include <fstream>
#include <iostream>
using namespace std;

// Simple Calculator v2 (significally improved)
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