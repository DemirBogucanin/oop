#include <iostream>
#include <string>
using namespace std;

class Osoba{
    public:
    string ime;
    int godine;
    int rodjenje;
    Osoba(string x, int y,int z){
        ime=x;
        godine=y;
        rodjenje=z;

    }void prikazi(){
        cout<<"ime: "<<ime<<endl;
        cout<<"godine: "<<godine<<endl;
        cout<<"rodjenje: "<<rodjenje<<endl;
    }
};
int main(){
    Osoba o1("demir",20,2005);
    o1.prikazi();
}