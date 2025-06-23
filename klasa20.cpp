//Zadatak 2: Računar – Desktop – Laptop
#include <iostream>
#include <string>
using namespace std;

class Racunar{
    public:
    string procesor;
    string ram;
    virtual char vrsta(){
        return 'R';
    }
    Racunar(): procesor(""),ram(""){}
    virtual void unos(){
        cout<<"Unesite model procesora: ";
        getline(cin,procesor);
        cout<<"Unesite ram: ";
        getline(cin,ram);
        
    }
    virtual void ispis(){
        cout<<"\nvrsta: "<<vrsta()<<"\nProcesor: "<<procesor<<"\nRam: "<<ram<<endl;
    }

};
class Desktop: public Racunar{
    public:
    string kuciste;
    Desktop(): kuciste(""){}
    char vrsta() override{
        return 'D';
    }
    void unos()override{
        Racunar::unos();
        cout<<"Unesite velicinu kucista: ";
        getline(cin,kuciste);
        
    }
    void ispis()override{
        Racunar::ispis();
        cout<<"Kuciste: "<<kuciste<<endl;
    }
};
class Laptop: public Racunar{
    public:
    int baterija;
    int tezina;
    Laptop():tezina(0),baterija(0){}
    char vrsta() override{
        return 'L';
    }
    void unos()override{
        Racunar::unos();
        cout<<"Unesite trajanje baterije: ";
        cin>>baterija;
        cout<<"Unesite tezinu laptopa: ";
        cin>>tezina;
        cin.ignore();

    }
    void ispis() override{
        Racunar::ispis();
        cout<<"Baterija traje: "<<baterija<<"\nTezine laptopa je :"<<tezina<<endl;
    }
    
};
int main(){
    Desktop d;
    Laptop l;
    cout<<"Unos za Desktop: \n";
    d.unos();
    cout<<"Unos za laptop: \n";
    l.unos();
    cout<<"Podaci o desktopu: \n";
    d.ispis();
   
    cout<<"\nIspis za laptop: ";
    l.ispis();
}