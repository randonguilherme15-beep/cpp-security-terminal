#include <iostream>
#include "Crediti.h"
#include "DatiCondivisi.h"
using namespace std;
double levelUpSec = 10.0; // Costo per aumentare sicurezza del reattore
    double restoredReactor = 20.0; // Costo per ripristinare il reattore
    double AvvioReattore = 30.0; // Costo per avviare il reattore
     
void Crediti() {
    int choice;
    
do { cout << "-----------------------------------------------" << endl;
    cout << "        💰 💰 Crediti iniziali: " << credits << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "            COSTI DEI SERVIZI 💰  💰" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "💰 💰 Costo per aumentare sicurezza del reattore: " << levelUpSec << "      =>  select 1" << endl;
    cout << "💰 💰 Costo per ripristinare il reattore: " << restoredReactor << "      =>  select 2" << endl;
    cout << "💰 💰 Costo per avviare il reattore: " << AvvioReattore << "      => select 3" << endl;
    cout << " 🔚 🔚 Exit: 4" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "        Seleziona un'opzione (1, 2, 3 o 4): " << endl;
    cin >> choice; 
    switch (choice)
{
case 1:
    cout << "-----------------------------------------------" << endl;
    cout << "        💰💰 Aumento sicurezza reattore" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "CREDITI RIMASTI: " << credits - levelUpSec << endl;
    credits -= levelUpSec; // Deduce the cost from credits
    break;
case 2:
    cout << "-----------------------------------------------" << endl;
    cout << "        💰💰 Ripristino reattore" << endl;
    cout << "-----------------------------------------------" << endl;  
    cout << "CREDITI RIMASTI: " << credits - restoredReactor << endl;
    credits -= restoredReactor; // Deduce the cost from credits
    reactorRestarts++; // Increment the reactor restarts counter
    break;
case 3:
    cout << "-----------------------------------------------" << endl;
    cout << "        💰💰 Avvio reattore" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "CREDITI RIMASTI: " << credits - AvvioReattore << endl;
    credits -= AvvioReattore; // Deduce the cost from credits
    break;
case 4:
    cout << "-----------------------------------------------" << endl;
    cout << "        🔚🔚 Uscita dal programma" << endl;
    cout << "-----------------------------------------------" << endl;
    break;
default:
    cout << "Scelta non valida." << endl;
    break;
}
    /* code */

} while (choice != 4);
    return;
}
