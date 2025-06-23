#include <iostream>
#include <cmath>
using namespace std;

class Tacka{
    public:
    double x;
    double y;
    void unos()
    {
        cout<<"Unesite kordinatu x: ";
        cin>>x;
        cout<<"Unesite kordinatu y: ";
        cin>>y;
    }
    void ispis()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
    double rastojanje(const Tacka& druga){
        double dx=x-druga.x;
        double dy=y-druga.y;
        return sqrt(dx*dx+dy+dy);
    }
};
int main(){
    Tacka t1,t2;
    cout<<"Unesite prvu tacku: ";
     cout << "Unos prve tacke:\n";
    t1.unos();

    cout << "Unos druge tacke:\n";
    t2.unos();

    cout << "\nPrva tacka: ";
    t1.ispis();
    cout << "Druga tacka: ";
    t2.ispis();

    double r = t1.rastojanje(t2);
    cout << "\nRastojanje izmedju tacaka je: " << r << endl;

}
