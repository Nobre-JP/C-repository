#include <iostream>

using namespace std;

int main() {
    int n, num, pares = 0 , impares = 0;
    
    cout<<"Digite a quantidade de números a serem lidos: ";
    cin>>n;
    
    for (int i = 0; i < n; i++) {
        cout<<"Digite o número"<<i+1<<endl;
        cin>> num;
        
        if (num % 2 == 0) {
            pares++;
        } 
		else {
            impares++;
        }
    }
    
    cout<<"Ha "<<pares<<" numero pares e "<<impares<<" numeros impares.";
    
    return 0;
}
