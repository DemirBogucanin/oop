#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string ime;
    int godina;
    float prosek;

    void unos() {
        cout << "\nUnesite ime: ";
        getline(cin, ime);

        cout << "Unesite godinu studija: ";
        cin >> godina;

        cout << "Unesite prosek ocena: ";
        cin >> prosek;
        cin.ignore();  
    }

    void ispis() {
        cout << "\nIme: " << ime;
        cout << "\nGodina studija: " << godina;
        cout << "\nProsek ocena: " << prosek << endl;
    }
};

int main() {
    int n;
    cout << "Koliko studenata zelite da unesete? ";
    cin >> n;
    cin.ignore();  

    Student s[100]; 

    for (int i = 0; i < n; i++) {
        cout << "\nUnos podataka za studenta " << i + 1 << ":";
        s[i].unos();
    }

    cout << "\n--- Podaci o studentima ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":";
        s[i].ispis();
    }

    return 0;
}
