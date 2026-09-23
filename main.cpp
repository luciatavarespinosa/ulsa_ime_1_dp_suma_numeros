#.\a.exeinclude <iostream>
using namespace std;

int main() {
    double a, b, c, d, e;
    double suma = 0;

    cout << "Bienvenido al programa de suma de 5 numeros\n";

    cout << "Ingresa 5 numeros: ";
    cin >> a >> b >> c >> d >> e;

    suma = a + b + c + d + e;

    cout << "La suma de los 5 numeros es: " << suma << endl;

    return 0;
}