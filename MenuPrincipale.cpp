#include <iostream>
#include "MenuPrincipale.h"
#include "LivelloSicurezza.h"
#include "Reattore.h"
#include "Crediti.h"
#include "Statistiche.h"
#include "SistemadiAccesso.h"
using namespace std;

int Sstatus;
int Ssecurity ;
int Reactor;
int Statistics;
int Logout;

void MenuPrincipale () {
    int choice;
    do { 
    cout << "=====================================================" << endl;
    cout << "          ✅✅  CONTROL TERMINAL  ✅✅" << endl;
    cout << "=====================================================" << endl;
    cout << "        Please select an option:" << endl;
    cout << "1. Status" << endl;
    cout << "2. Security" << endl;
    cout << "3. Reactor" << endl;
    cout << "4. Statistics" << endl;
    cout << "5. Logout" << endl;
    cout << "=====================================================" << endl;
    cout << "        Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "======================================================" << endl;
        cout << "🔄️🔄️Opening CREDITS STATUS🔄️🔄️" << endl;
        cout << "======================================================" << endl;
        Crediti();
        break;
    case 2:
        cout << "======================================================" << endl;
        cout << "🔄️🔄️Opening SECURITY LEVEL🔄️🔄️" << endl;
        cout << "======================================================" << endl;
        LivelloSicurezza();
        break;
    case 3:
        cout << "======================================================" << endl;
        cout << "🔄️🔄️Opening REACTOR CONTROL🔄️🔄️" << endl;
        cout << "======================================================" << endl;
        Reattore();
        break;
    case 4:
        cout << "======================================================" << endl;
        cout << "🔄️🔄️Opening STATISTICS🔄️🔄️" << endl;
        cout << "======================================================" << endl;
        Statistiche();
        break;
    case 5:
        cout << "======================================================" << endl;
        cout << "         👋🏽👋🏽Logging out👋🏽👋🏽" << endl;
        cout << "======================================================" << endl;
        SistemadiAccesso(); // code for Logout
        break;
    default:
        cout << "❌❌Invalid choice!❌❌" << endl;
        break;
    } 
} while (choice != 5); 
return;
} 
