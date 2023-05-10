/*Crea un vettore di caratteri di dimensione N = 5.
Inizializzalo con un assegnamento con 5 valori a caso e conta quante vocali sono state inserite.
Stampa a video il risultato.*/

#include <iostream>
using namespace std;

int main() {
    const char dim = 5;
    char vettore[dim] = {'a', 'b', 'e' , 'i', 'f'};
    int vocali = 0;

    for(int i = 0; i < dim; i++) {
        char b = vettore[i];
        if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u')
            vocali++;
    }
    cout<<"Il numero delle vocali è: "<<vocali<<endl;
    return 0;
}