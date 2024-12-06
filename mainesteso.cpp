#include <iostream>
#include <string>
#include "Dizionario.cpp"
using namespace std;

int main() {

    Dizionario<string> dict;

    dict.inserisci("apple", "fruit");
    dict.inserisci("car", "vehicle");
    dict.inserisci("book", "object");
    dict.inserisci("pen", "stationery");
    dict.inserisci("book", "literature");
    
    cout << "Stampa del dizionario dopo gli inserimenti:" <<endl;
    dict.stampa();
    
    cout << "Recupero del valore associato a 'apple': " << dict.recupera("apple") <<endl;
    cout << "Recupero del valore associato a 'car': " << dict.recupera("car") <<endl;
    cout << "La chiave 'book' appartiene al dizionario? " << (dict.appartiene("book") ? "Sì" : "No") << endl;
    dict.cancella("car");
    cout << "Stampa del dizionario dopo la cancellazione di 'car':" <<endl;
    dict.stampa();

    return 0;
}
