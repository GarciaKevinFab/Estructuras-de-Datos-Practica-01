#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int *num1 = new int;
    int *num2 = new int;

    cout << "Ingrese el primer numero: ";
    cin >> *num1;
    cout << "Ingrese el segundo numero: ";
    cin >> *num2;

    cout << "Suma: " << (*num1 + *num2) << endl;
    cout << "Resta: " << (*num1 - *num2) << endl;
    cout << "Multiplicacion: " << (*num1 * *num2) << endl;
    if (*num2 != 0)
    {
        cout << "Division: " << (*num1 / *num2) << endl;
    }
    else
    {
        cout << "Division: No se puede dividir por cero" << endl;
    }

    cout << "Raiz cuadrada de la suma: " << sqrt(*num1 + *num2) << endl;
    cout << "Cubo del primer numero: " << pow(*num1, 3) << endl;

    delete num1;
    delete num2;

    return 0;
}
