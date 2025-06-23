#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Trougao {
public:
    double a, b, c;
    Trougao(double a, double b, double c) : a(a), b(b), c(c) {}
    double povrsina() const {
        double s = (a + b + c) / 2;
        return sqrt(s*(s-a) *(s-b) * (s-c));
    }
    void ispis() const {
        cout << "Stranice: " << a << ", " << b << ", " << c
             << " | Površina: " << povrsina() << endl;
    }
};

int main() {
    int n;
    cout << "Unesite broj trouglova: ";
    cin >> n;
    Trougao* niz[100];

    for (int i = 0; i < n; i++) {
        double a, b, c;
        cout << "Unesite stranice trougla #" << i + 1 << ": ";
        cin >> a >> b >> c;
        if (a + b > c && a + c > b && b + c > a) {
            niz[i] = new Trougao(a, b, c);
        } else {
            cout << "Stranice ne formiraju trougao! Pokusajte ponovo.\n";
            i--; 
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (niz[i]->povrsina() > niz[j]->povrsina()) {
                Trougao* temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }
        }
    }
    cout << "\nSortirani trouglovi po povrsini:\n";
    for (int i = 0; i < n; i++) {
        niz[i]->ispis();
    }
    for (int i = 0; i < n; i++) {
        delete niz[i];
    }

    return 0;
}
