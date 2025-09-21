#include <iostream>

using namespace std;

int main() {
    int n, i, first = 0, second = 1, next;

    cout<<"Digite um numero inteiro positivo n"<<endl;
    cin>>n;

    cout<<"Os "<<n<<" primeiros numeros da sequência de Fibonacci sao:"<<endl;

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        cout<< next;
    }

    cout<<endl;

    return 0;
}
