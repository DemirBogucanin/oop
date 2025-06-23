#include <iostream>
using namespace std;

class Pica{
    public:
        string topping1;
    
    Pica(string topping1){
        this->topping1=topping1;
    }
};
int main(){
    Pica pica1("Margarita");
    cout<<pica1.topping1<<'\n';
}