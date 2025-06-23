#include <iostream>
#include <string>
using namespace std;

class Osoba {
protected:
    string ime;
    string datumRodjenja;
    string adresa;

public:
    Osoba() : ime(""), datumRodjenja(""), adresa("") {}

    void citajOsobu() {
        cout << "Unesite ime: ";
        getline(cin, ime);
        cout << "Unesite datum rodjenja: ";
        getline(cin, datumRodjenja);
        cout << "Unesite adresu: ";
        getline(cin, adresa);
    }

    void pisiOsobu() const {
        cout << "Ime: " << ime << endl;
        cout << "Datum rodjenja: " << datumRodjenja << endl;
        cout << "Adresa: " << adresa << endl;
    }
};

class Djak : public Osoba {
private:
    string skola;
    int razred;

public:
    Djak() : skola(""), razred(0) {}

    void citajDjaka() {
        citajOsobu();
        cout << "Unesite naziv skole: ";
        getline(cin, skola);
        cout << "Unesite razred: ";
        cin >> razred;
        cin.ignore();
    }

    void pisiDjaka() const {
        pisiOsobu();
        cout << "Skola: " << skola << endl;
        cout << "Razred: " << razred << endl;
    }
};
class Zaposleni : public Osoba {
private:
    string preduzece;
    string odeljenje;

public:
    Zaposleni() : preduzece(""), odeljenje("") {}

    void citajZaposlenog() {
        citajOsobu();
        cout << "Unesite naziv preduzeca: ";
        getline(cin, preduzece);
        cout << "Unesite naziv odeljenja: ";
        getline(cin, odeljenje);
    }

    void pisiZaposlenog() const {
        pisiOsobu();
        cout << "Preduzece: " << preduzece << endl;
        cout << "Odeljenje: " << odeljenje << endl;
    }
};
int main() {

    Djak d1;
    Zaposleni z1;

    cout << "--- Unos Djaka ---" << endl;
    d1.citajDjaka();

    cout << "\n--- Unos Zaposlenog ---" << endl;
    z1.citajZaposlenog();

    cout << "\n--- Podaci o Djaku ---" << endl;
    d1.pisiDjaka();

    cout << "\n--- Podaci o Zaposlenom ---" << endl;
    z1.pisiZaposlenog();

    return 0;
}
