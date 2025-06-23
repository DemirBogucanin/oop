//2.2. Zadatak
#include <iostream>
#include <cmath>
using namespace std;

class Tacka {
public:
    double x, y;

    Tacka() {
        x = 0;
        y = 0;
    }

    Tacka(double a, double b) {
        x = a;
        y = b;
    }

    void unos() {
        cout << "Unesite x: ";
        cin >> x;
        cout << "Unesite y: ";
        cin >> y;
    }

    void ispis() {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    double rastojanje(Tacka druga) {
        return sqrt((x - druga.x) * (x - druga.x) + (y - druga.y) * (y - druga.y));
    }

    void pomeri(double dx, double dy) {
        x += dx;
        y += dy;
    }
};

int main() {
    Tacka t1, t2;
    
    cout << "Unesi prvu tacku:\n";
    t1.unos();
    
    cout << "Unesi drugu tacku:\n";
    t2.unos();

    cout << "Prva tacka je: ";
    t1.ispis();
    
    cout << "Druga tacka je: ";
    t2.ispis();

    cout << "Rastojanje izmedju tacaka: " << t1.rastojanje(t2) << endl;

    cout << "Pomeranje prve tacke za (1, 2):\n";
    t1.pomeri(1, 2);
    t1.ispis();
}
