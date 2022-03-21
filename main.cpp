#include <iostream>

using namespace std;
// you may type whatever you want
int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
<<<<<<< HEAD
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n'
         << "Min = " << min(a, b) << '\n';
=======
    << "A - B = " << a - b << '\n'
    << "A * B = " << a * b << '\n'
    << "A / B = " << a / b << '\n'
    << "Max = " << max(a, b) << '\n';

>>>>>>> caa0408645d0b06e11370ec782e2bb898d1a081c
    return 0;
}
