#include <iostream>
using namespace std;

int main() {
    int debito,promosso,i,N;
    float somma,voto,media;
    string nome;
    cout<<"quanti studenti ci sono?"<<endl;
    cin>>N;
    i=0;
    debito=0;
    promosso=0;
    somma=0;
    while(i<N){
        cout<<"come ti chiami?"<<endl;
        cin>>nome;
        cout<<"quale è il tuo nome?"<<endl;
        cin>>voto;
        if(voto>=6){
            cout<<"sei stato promosso"<<endl;
            promosso=promosso+1;
            }else{
                cout<<"sei stato bocciato"<<endl;
                debito=debito+1;
}
somma=somma+1;
i=i+1;
}
cout<<"il numero dei debiti è"<<debito<<"il numero dei promossi è"<<promosso<<endl;
media=somma/N;
cout<<"la media della classe è"<<media<<endl;
}
