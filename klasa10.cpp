#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string ime;
    string prezime;
    int indeks;
    void unos(){
        cout<<"Unesite ime: ";
        getline(cin,ime);
        cout<<"Unesite prezime: ";
        getline(cin,prezime);
        cout<<"Unesite broj indeksa: ";
        cin>>indeks;
        cin.ignore();
    }void ispis(){
        cout<<"\nIme: "<<ime<<"\nPrezime: "<<prezime<<"\nbroj indeksa: "<<indeks;
    }
};

int main()
{
    Student s;
    s.unos();
    s.ispis();

}