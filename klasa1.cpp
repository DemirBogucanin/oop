#include <iostream>
using namespace std;

int main(){
    
    int a,b;
    cin>>a>>b;
    int suma=0;
    int brojac=0;
    for(int i=a;i<=b;i++){
        if(i%2==1){
            suma+=i;
            brojac++;
        }
    }double ari=(double)suma/brojac;
    cout<<ari;


}
    
