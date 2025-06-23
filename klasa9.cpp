#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    char ime[50];
    public:
    void unos(){
        cout<<"Unesite ime";
        cin.getline(ime,50);
        
    }
    void ispis(){
        cout<<"Ime studenta je: "<<ime<<endl;
    }
};
int main(){
    Student s;
    s.unos();
    s.ispis();
    return 0;

}