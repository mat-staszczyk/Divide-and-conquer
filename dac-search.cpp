#include <iostream>

using namespace std;

// Ustalenie liczby danych w zestawie
const int N = 10000;

int main()
{
    int dane[N], i;
    // Przygotowanie zestawu danych
    for(i = 0; i<N; i++) {
        dane[i] = i+1;
    }

    for(i = 0; i<N; i++) {
        cout << dane[i] << " ";
    }

    int szukana, licznik = 0, temp, lewa = 0, prawa = N;

    cout << endl << "Podaj szukana wartosc:" << endl;
    cin >> szukana;

    while (lewa <= prawa) {
        temp = ((lewa+prawa)/2);
        licznik++;
        if (szukana == dane[temp]) {
            cout << "Liczba " << szukana << " znaleziona w " << licznik << ". podejsciach." << endl;
            cin.get();
            return 0;
        } else if (szukana < dane[temp]) {
            prawa = temp;
        } else if (szukana > dane[temp]) {
            lewa = temp;
        }

    }

    cout << "Nie znaleziono " << szukana << " w danym zestawie." << endl;
    return 0;
}
