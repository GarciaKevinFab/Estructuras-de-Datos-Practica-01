#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float *x = new float;

    cout << "Ingrese el valor de x: ";
    cin >> *x;

    float y = pow(*x, 3) + 4 * (*x) + 10;
    cout << "El valor de y es: " << y << endl;

    delete x;

    return 0;
}
