#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

using namespace std;

int main()
{
    float *radio = new float;

    cout << "Ingrese el radio de la circunferencia: ";
    cin >> *radio;

    float area = M_PI * pow(*radio, 2);
    cout << "El area de la circunferencia es: " << area << endl;

    delete radio;

    return 0;
}
