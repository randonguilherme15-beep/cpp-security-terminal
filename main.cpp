#include <iostream>
#include "Crediti.h"
#include "LivelloSicurezza.h"
#include "MenuPrincipale.h"
#include "Reattore.h"
#include "SistemadiAccesso.h"
#include "Statistiche.h"
using namespace std;

int main() {
    if (SistemadiAccesso()) {
        MenuPrincipale();
    } else {
        cout << "Accesso negato. Uscita dal programma." << endl;
    }
    return 0;
}