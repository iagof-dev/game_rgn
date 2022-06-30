// ahbduiyasgbufihgaudsayfg.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int resposta = rand();
int tenta = 0;
string dica = "";
bool perdeu = false;
int rodadas = 0;

int main()
{
    cout << resposta << " \n";

    for (int i = 1; i <= 10; i++) {
        cout << dica;
        rodadas = i;
        cout << "Rodada " << i << "/10\n";
        cout << "Tente acertar o numero! \n";
        cin >> tenta;

        if (tenta == resposta) {
            system("CLS");
            cout << "Acertou! \n";
            
            break;
        }
        if (tenta < resposta) {
            dica = "Um Numero maior\n";
        }
        if (tenta > resposta) {
            dica = "Um Numero Menor\n";
        }

        if (i == 10) {
            perdeu = true;
        }
        system("CLS");
    }

    
    cout << "Em " << rodadas << "/10 rodadas.\n";
    if (perdeu == true) {
        cout << "Perdeu!\n";
    }
    cout << "A Resposta era: " << resposta;
    









    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";

}

