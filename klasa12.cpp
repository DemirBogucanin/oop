#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    string ime;
    int godine;
    float prosek;
    public:
    void setIme(string x){
        ime=x;
    }
    void setGodine(int y){
        godine=y;
    }void setProsek(float z){
        prosek=z;
    }
    string getIme(){
        return ime;
    }
    int getGodine(){
        return godine;
    }
    float getProsek(){
        return prosek;
    }

};
int main(){
    Student s;
    s.setIme("Ludak bougcanin");
    s.setGodine(20);
    s.setProsek(6.3);
    cout<<"Ime: "<<s.getIme()<<endl;
    cout<<"Godine: "<<s.getGodine()<<endl;
    cout<<"Prosek: "<<s.getProsek()<<endl;

}