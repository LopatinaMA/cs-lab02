#include <iostream>

using namespace std;
// you may type whatever you want
int main()
{
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n'
         << "Min = " << min(a, b) << '\n'
         << "Max = " << max(a, b) << '\n';

    return 0;
}
