#include <iostream>
#include "SistemadiAccesso.h"
#include "DatiCondivisi.h"
using namespace std;

int pin = 5736;
int pinInserito;
bool accessoConsentito = false;
   
bool SistemadiAccesso() { do{
    cout << "===CONTROL TERMINAL===" << endl;
    cout << "INSERIRE PIN DI ACCESSO" << endl;
     while (tentativi1 <= 3) {
    cout << "PIN: " << endl;
    cin >> pinInserito;
     
     if (pinInserito == pin) {
        cout << "---------------------------------------------" << endl;
        cout << "          ✅✅  ACCESSO CONSENTITO✅✅" << endl;
        cout << "---------------------------------------------" << endl;
        accessoConsentito = true;
        return true;
    } else {
        cout << "-----------------------------------------" << endl;
        cout << "          ❌❌  PIN ERRATO❌❌" << endl;
        cout <<  "           ACCESSO NEGATO" << endl;
        cout << "-----------------------------------------" << endl;
        tentativi1++;
    }
}
    if (!accessoConsentito && tentativi1 == 3) {
        cout << "-----------------------------------------------------" << endl;
        cout << "TROPPI TENTATIVI FALLITI. TERMINAZIONE DEL PROGRAMMA." << endl;
        cout << "-----------------------------------------------------" << endl;
 }
}while (tentativi1 <= 3 && !accessoConsentito);
    return false;
}
