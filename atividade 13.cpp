#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char str[100];
    int i, len;

    cout<<"Digite uma string:"<<endl;
    fgets(str, 100, stdin);

    len = strlen(str) - 1;

    cout<<"A string de tras para frente e:"<<endl;

    for (i = len - 1; i >= 0; i--) {
        cout<<str[i];
    }

    return 0;
}
