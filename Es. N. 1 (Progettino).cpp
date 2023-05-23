/*1) I codici a barre dei prodotti sono composti da 13 cifre di cui l'ultima è la cifra di controllo che si determina a partire
dalle prime 12
(il codice vero e proprio) con le seguenti regole:
Moltiplicare per 3 tutte le cifre in posizione "dispari" (la prima, la terza, ..., fino all'undicesima);
Moltiplicare per 1 tutte le cifre in posizione "pari" (la seconda, la quarta, ...., fino alla dodicesima);
Sommare i 12 valori così ottenuti
Prendere il resto della divisione per 10 della somma ottenuta
Scrivere una funzione C++ che, a partire da un vettore di 12 numeri corrispondenti alle singole cifre di
un codice a barre, restituisca la cifra di controllo calcolata con le regole illustrate. Scrivere un programma C++ che richieda
all'utente l'inserimento delle singole cifre di un codice a barre e visualizzi la corrispondente cifra di controllo con la
funzione realizzata in precedenza.*/

#include <iostream>
using namespace std;

int Funz_Molt_3(int i*3);
int Funz_Molt_1(int i*1);

int main() {
    int vett[12];
    int cont = 0;
    for(i = 0; i< 12; i++)
        cin>>i;
        if(i/2)
        cout<<"I valori delle cifre Pari del vettore moltiplicati per 3 sono: "<<Funz_Molt_3[i]<<endl;
        else-if(i/3)
        cout<<"I valori delle cifre Dispari del vettore moltiplicati per 1 sono: "<<Funz_Molt_1[i]<<endl;
return 0;
}