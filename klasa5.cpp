#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        string ime;
        int godina;
        float prosek;

        Student(string x, int y, float z){
            ime=x;
            godina=y;
            prosek=z;
        }
            

        ispisi(){
            cout<<"ime: "<<ime<<endl;
            cout<<"godine: "<<godina<<endl;
            cout<<"prosek: "<<prosek<<endl;
        }
};

int main(){
    string ime;
    int godina;
    float prosek;
    cout<<"Unesite ime studenta: ";
    getline(cin,ime);
    cout<<"Unesite godinu studija: ";
    cin>>godina;
    cout<<"Unesite prosek: ";
    cin>>prosek;
    Student s(ime,godina,prosek);
    s.ispisi();
    
    return 0;
}