#include <iostream>
#include <string>
using namespace std;

class Pravougaunik{
    public:
    int duzina;
    int sirina;
    int povrsina(){
        return duzina*sirina;
    }
    void unos(){
        cout<<"Unesite duzinu: ";
        cin>>duzina;
        cout<<"Unesite sirinu: ";
        cin>>sirina;
    }
    void ispis(){
        int rez=povrsina();
        cout<<"Povrsina je: "<<rez<<endl;
    }
};
int main(){
    Pravougaunik p;
    p.unos();
    p.ispis();
}