#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        string ime;
        int godine;
        float prosek;

        void unos()
        {
            cout << "Unesite ime: \n";
            cin >> ime;
            cout << "Unesite godine:\n";
            cin >> godine;
            cout << "Unesite prosek:\n";
            cin >> prosek;
        }
        void ispis(){
            cout << "Ime: " << ime << "\nGodine: " << godine << "\nProsek: " << prosek << "\n";

        }

};

int main()
{
    int n;
    cout<<"Unesite broj studenata\n";
    cin>>n;
    Student studenti[100];
    for(int i=0;i<n;i++)
    {
        studenti[i].unos();
    }
    cout<<"\nIspis studenata: \n";
    for(int i=0;i<n;i++)
    {
        studenti[i].ispis();
    }
}