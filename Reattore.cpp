#include <iostream>
#include "Reattore.h"
#include "DatiCondivisi.h"

using namespace std;
void Reattore() {
    int choice;

    cout << "☢️  ☢️   Reattore attivo: " << (reactorActive ? "Sì" : "No") << endl;
    
   do {  if (reactorActive) { 
        cout << "=============================================" << endl;
        cout << "☢️  ☢️   Reattore in funzione" << endl;
        cout << "----------------------------------------------" << endl;
        cout << "☢️  ☢️   Spegnere il reattore? (1 = Sì, 0 = No)" << endl;
        cout << "----------------------------------------------" << endl;
        cin >> choice;
        if (choice == 1) {
            reactorActive = false;
            cout << "=============================================" << endl;
            cout << "☢️  ☢️   Reattore spento" << endl;
            cout << "=============================================" << endl;
        } else if (choice == 0) {
            cout << "=============================================" << endl;
            cout << "☢️  ☢️   Reattore rimane attivo" << endl;
            cout << "=============================================" << endl;
        } else {
            cout << "----------------------------------------------" << endl;
            cout << "❌❌  Scelta non valida. Inserisci 1 o 0. ❌❌" << endl;
            cout << "----------------------------------------------" << endl;
        }
    /* code */
   } 
} while ( choice != 1 && choice != 0);
    return;
}