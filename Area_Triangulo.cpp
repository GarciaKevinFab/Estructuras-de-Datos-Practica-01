#include <iostream>

using namespace std;

int main()
{
    float *base = new float;
    float *altura = new float;

    cout << "Ingrese la base del triangulo: ";
    cin >> *base;
    cout << "Ingrese la altura del triangulo: ";
    cin >> *altura;

    float area = (*base * *altura) / 2;
    cout << "El area del triangulo es: " << area << endl;

    delete base;
    delete altura;

    return 0;
}
