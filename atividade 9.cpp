#include <iostream>

using namespace std;

int main()
{
	
	int num;
	
	cout<<"Digite um numero"<<endl;
	cin>>num;
	
	if(num>0){
		
		cout<<"Numero positivo";
	}
	else if(num==0){
		cout<<"Numero neutro";
	}
	else{
		cout<<"Numero negativo";
	}
	return 0;
}
