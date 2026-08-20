#include <iostream>
#include "Statistiche.h"
#include "DatiCondivisi.h"

using namespace std;

void Statistiche() {
    cout << "-----------------------------------------------" << endl;
    cout << "        📊 STATISTICHE DEL TERMINALE" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Comandi eseguiti: " << commandsExecuted << endl;
    cout << "Tentativi di login falliti: " << failedLogins << endl;
    cout << "Riavvii del reattore: " << reactorRestarts << endl;
    cout << "Aggiornamenti di sicurezza: " << securityUpgrades << endl;
    cout << "-----------------------------------------------" << endl;
return;
}

