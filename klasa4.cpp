#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        string ime;
        int godina;
        float prosek;

        

        ispisi(){
            cout<<"ime: "<<ime<<endl;
            cout<<"godine: "<<godina<<endl;
            cout<<"prosek: "<<prosek<<endl;
        }
};

int main(){
    Student s;
    cout<<"Unesite ime studenta: ";
    getline(cin,s.ime);
    cout<<"Unesite godinu studija: ";
    cin>>s.godina;
    cout<<"Unesite prosek: ";
    cin>>s.prosek;
    s.ispisi();
    return 0;
}