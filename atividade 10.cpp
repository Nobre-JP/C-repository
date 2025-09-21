#include <iostream>

using namespace std;

int main()
{
	
	int num;
	
	cout<<"Digite um numero"<<endl;
	cin>>num;
	
	if(num>=1000){
		
		cout<<"O numero que digitou tem 4 digitos";
	}
	else if(num>=100){
		
		cout<<"O numero que digitou tem 3 digitos";
	}
	else if(num>=10){
		
		cout<<"O numero que digitou tem 2 digitos";
	}
	else{
		
		cout<<"O numero que digitou tem apenas 1 digito";
	}
	return 0;
}
