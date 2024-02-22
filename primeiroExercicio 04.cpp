#include <iostream>

using namespace std;

bool ehPositivo(int numero) {
    return numero > 0;
}

int somaDivisor(int numero) {
    int soma = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }
    return soma;
}


int main()
{
    int numeros[5];

    for (int i = 0; i < 5; i++) {
        cout << "Digite o "<< i + 1 <<"o numero:";
        cin >> numeros[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << "\n\nNumero " << numeros[i] << " : ";
        if (ehPositivo(numeros[i])) {
            cout << "POSITIVO"; 
        }
        else
        {
            cout << "NEGTIVO";
            
        }

        cout << "\nSoma dos divisores: " << somaDivisor(numeros[i]);
    }

    return 0;

}

