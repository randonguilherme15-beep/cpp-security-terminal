#include <iostream>
#include "LivelloSicurezza.h"
#include "DatiCondivisi.h"
using namespace std;

int newLevel;
void LivelloSicurezza() {
    cout << "Livello sicurezza..." << endl;
    cin >> newLevel;
    if (newLevel >=1 && newLevel <= 3){
        cout << "---------------------------------------------" << endl;
        cout << "Livello di sicurezza valido" << endl;
        cout << "---------------------------------------------" << endl;
        cout << "Livello di sicurezza aggiornato da " << securityLevel << " a " << newLevel << endl;
        cout << "---------------------------------------------" << endl;
        cout << "Salvataggio in corso..." << endl;
        cout << "---------------------------------------------" << endl;
        cout << "Salvataggio completato" << endl;
        cout << "---------------------------------------------" << endl;
        securityLevel=newLevel;
                 securityUpgrades++; // Increment the security upgrades counter

      } else {
        cout << "Livello non valido" << endl;  
           
    } 
    switch (securityLevel) {
        case 1:
            cout << "Livello di sicurezza: Basso" << endl;
            break;
        case 2:
            cout << "Livello di sicurezza: Medio" << endl;
            break;
        case 3:
            cout << "Livello di sicurezza: Alto" << endl;
            break;
        default:
            cout << "Livello di sicurezza non valido" << endl;
            break;
    }
    return;
}