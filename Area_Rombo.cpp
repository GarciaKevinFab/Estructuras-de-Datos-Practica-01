#include <iostream>

using namespace std;

int main()
{
    float *dMayor = new float;
    float *dMenor = new float;

    cout << "Ingrese la diagonal mayor del rombo: ";
    cin >> *dMayor;
    cout << "Ingrese la diagonal menor del rombo: ";
    cin >> *dMenor;

    float area = (*dMayor * *dMenor) / 2;
    cout << "El area del rombo es: " << area << endl;

    delete dMayor;
    delete dMenor;

    return 0;
}
