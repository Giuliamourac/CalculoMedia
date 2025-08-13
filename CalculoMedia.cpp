#include <iostream>

using namespace std;

int main()
{
    double p1 = 0;
    double p2 = 0;
    double p3 = 0;
    double p4 = 0;
    double media = 0;

    cout << "Bem-vindo ao calculo de media!" << endl;

    cout << "Digite sua nota da P1:" << endl;
    cin >> p1;

    cout << "Digite sua nota da P2:" << endl;
    cin >> p2;

    cout << "Digite sua nota da P3:" << endl;
    cin >> p3;

    cout << "Digite sua nota da P4:" << endl;
    cin >> p4;

    media = (p1 + p2 + p3 + p4) / 4;

    cout << "Sua media e: " << media;

    return 0;
}