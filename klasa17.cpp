#include <iostream>
#include <string>
using namespace std;

class Osoba {
    public:
    string ime;
    string prezime;

    void unos() {
        cout << "Unesite ime: ";
        getline(cin, ime);
        cout << "Unesite prezime: ";
        getline(cin, prezime);
    }

    void ispis() {
        cout << "Ime: " << ime << endl;
        cout << "Prezime: " << prezime << endl;
    }
};

class Student : public Osoba {
    public:
    int indeks;

    void unosS() {
        unos();  
        cout << "Unesite broj indeksa: ";
        cin >> indeks;
        cin.ignore(); 
    }

    void ispisS() {
        ispis();  
        cout << "Broj indeksa: " << indeks << endl;
    }
};

int main() {
    Student s;
    s.unosS();
    cout << "\n--- Podaci o studentu ---\n";
    s.ispisS();
    return 0;
}
