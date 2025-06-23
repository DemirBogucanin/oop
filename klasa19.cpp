#include <iostream>
#include <string>
using namespace std;


class Oblik{
    public:
    virtual char vrsta(){
        return 'o';
    }virtual double povrsina(){
        return 0.0;
    }virtual void ispisi(){
        cout<<"\nVrsta: "<<vrsta()<<"\nPovrsina: "<<povrsina()<<endl;
    }
      virtual void unos() {} 
};
class Pravougaonik:public Oblik{
    public:
    double visina;
    double sirina;
    Pravougaonik():visina(0),sirina(0){}
    char vrsta()override{
        return 'p';
    }
    double povrsina() override{
        return sirina*visina;
    }
    void unos(){
        cout<<"Unesite sirinu: ";
        cin>>sirina;
        cout<<"Unesite visinu: ";
        cin>>visina;
        cin.ignore();
    }
    void ispisi()override{
        cout<<"\nVrsta: "<<vrsta()<<"\nsirina: "<<sirina<<"\nvisina: "<<visina<<"\npovrsina: "<<povrsina()<<endl;

    }
};

class Krug:public Oblik{
    public:
    double r;
    Krug():r(0){}
    char vrsta()override{
        return 'k';
    }
    double povrsina() override{
        return 3.14*r*r;
    }
    void unos()override{
        cout<<"Unesite r: ";
        cin>>r;
        cin.ignore();
    }void ispisi() override{
        cout<<"\nPoluprecnik: "<<r<<"\npovrsina: "<<povrsina()<<"\nVrsta: "<<vrsta()<<endl;
    }
};
int main(){
    Krug k;
    Pravougaonik p;
    cout<<"Unesite unos za prav:\n";
    p.unos();
    cout<<"\nUnesite podatke za prav: ";
    p.ispisi();
    
    cout<<"Unesite unos za krug:\n ";
    k.unos();
    cout<<"\nUnesite podatke za krug: ";
    k.ispisi();
    
    
}