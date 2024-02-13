#include <iostream>
#include <climits>

using namespace std;

int main()
 {
    int numero;
    int contador = 0;
    int suma = 0;
    int maximo = INT_MIN;
    int minimo = INT_MAX;

    do {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero < 0) 
		{
            break;
        }

        suma += numero;
        if (numero > maximo) 
		{
            maximo = numero;
        }
        if (numero < minimo) 
		{
            minimo = numero;
        }

        contador++;
    } while (true);

     double promedio = static_cast<double>(suma) / contador;
    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}


