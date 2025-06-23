#include <iostream>
using namespace std;



class Auto{
    public:
        string proizvodnja;
        string model;
        int godina;
        string boja;

    Auto(string proizvodnja, string model, int godina,string boja ){
        this->proizvodnja=proizvodnja;
        this->model=model;
        this->godina=godina;
        this->boja=boja;
    }
};

int main(){
    Auto auto1("Audi","a3",2000,"crvena");
    Auto auto2("mecka","s klasa",2005,"bela");
    cout<<auto2.proizvodnja<<'\n';
    cout<<auto2.model<<'\n';
    cout<<auto2.godina<<'\n';
    cout<<auto2.boja<<'\n';

    
}