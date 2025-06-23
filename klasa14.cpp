#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string ime;
    int godina;
    float prosek;
    static int broj;

    void unos() {
        cout << "Unesite ime: ";
        getline(cin, ime);

        cout << "Unesite godinu: ";
        cin >> godina;

        cout << "Unesite prosek: ";
        cin >> prosek;
        cin.ignore();

        broj++;  
    }

    void ispis() {
        cout << "\nIme: " << ime;
        cout << "\nGodina studija: " << godina;
        cout << "\nProsek ocena: " << prosek << endl;
    }
};

int Student::broj = 0;

int main() {
    int n;
    cout << "Unesite broj studenata: ";
    cin >> n;
    cin.ignore();

    Student s[100];  // Kreira se 100 objekata, koristi se prvih n

    for (int i = 0; i < n; i++) {
        s[i].unos();
    }

    for (int i = 0; i < n; i++) {
        s[i].ispis();
    }

    cout << "Broj studenata: " << Student::broj << endl;
    return 0;
}
