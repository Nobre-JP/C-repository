#include<iostream>

using namespace std;

int main()
{
	
	float salario, acrescimo, salario_final;
	
	cout<<"Digite o seu salario"<<endl;
	cin>> salario;
	
	if(salario>1000.00){
		
		acrescimo= salario/100*5;
		
		salario_final = acrescimo+salario;
		
		cout<<"O salario final e de " <<salario_final;
}

else if(salario<500){
	
	acrescimo= salario/100*15;
		
		salario_final = acrescimo+salario;
		
		cout<<"O salario final e de " <<salario_final;
}

else{
	
	acrescimo= salario/100*10;
		
		salario_final = acrescimo+salario;
		
		cout<<"O salario final e de " <<salario_final;
}
return 0;
}
