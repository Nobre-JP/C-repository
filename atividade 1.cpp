#include <iostream>

using namespace std;

int main()
{
    int numero, i, resultado;
    char arit;

    cout<<"Opcoes"<<endl;
    cout<< "+ Soma"<<endl;
    cout<< "- Sub"<<endl;
    cout<< "* multi"<<endl;
    cout<<"/ Divi"<<endl;
    cout<<"Qual operacao?"<<endl;
    cin>> arit;

    switch(arit){

        case '+':

        cout<<"Escolha um numero"<<endl;
        cin>> numero;

        for(i=1; i<=10; i++){
            resultado=i+numero;

            cout<< numero << " + " << i<<" e igual a "<< resultado;
            cout<< endl;
        }
        break;

        case '-':

        cout<<"Escolha um numero"<<endl;
        cin>> numero;

        for(i=1; i<=10; i++){
            resultado= numero-i;

            cout<< numero << " - " << i<<" e igual a "<< resultado;
            cout<< endl;
        }
        break;

        case '*':

        cout<<"Escolha um numero"<<endl;
        cin>> numero;

        for(i=1; i<=10; i++){
            resultado=numero;

            cout<< numero << " * " << i<<" e igual a "<< resultado;
            cout<< endl;
        }
        break;

        case '/':

        cout<<"Escolha um numero"<<endl;
        cin>> numero;

        for(i=1; i<=10; i++){
            resultado=i/numero;

            cout<< i << " / " << numero<<" e igual a "<< resultado;
            cout<< endl;
        }
        break;

        default :
        cout<<"invalido";
        break;
    }
    return 0;
}
