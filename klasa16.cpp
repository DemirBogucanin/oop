#include <iostream>
#include <string>
using namespace std;

class Datum {
public:
    int dan;
    int mesec;
    int godina;

    void unos() {
        cout << "Unesite dan: ";
        cin >> dan;
        cout << "Unesite mesec: ";
        cin >> mesec;
        cout << "Unesite godinu: ";
        cin >> godina;
    }

    void ispis() {
        cout << dan << "." << mesec << "." << godina;
    }
};

class Student {
public:
    string ime;
    string prezime;
    int indeks;
    Datum datumR;

    void unos() {
        cout << "Unesite ime: ";
        cin.ignore(); 
        getline(cin, ime);
        cout << "Unesite prezime: ";
        getline(cin, prezime);
        cout << "Unesite broj indeksa: ";
        cin >> indeks;
        cout << "Unesite datum rodjenja:\n";
        datumR.unos();
    }

    void ispis() {
        cout << "\nIme: " << ime;
        cout << "\nPrezime: " << prezime;
        cout << "\nBroj indeksa: " << indeks;
        cout << "\nDatum rodjenja: ";
        datumR.ispis();
        cout << endl;
    }
};

int main() {
    Student s;
    s.unos();
    s.ispis();

    return 0;
}
