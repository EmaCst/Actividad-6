#include <iostream>

using namespace std;

int main(){
/*
	int edad,*p_edad;
	p_edad=&edad;
	cout<<"Ingrese edad "<<endl;
	cin>>edad;
	cout<<*p_edad<<endl;
	
	if(*p_edad>18){
		cout<<"Mayor de edad";
	}else{
		cout<<"Menor de edad";
	}

*//*

	int total=0;
	int notas[total];
	char res;
	int *p_notas=notas;
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n):";
		cin>>res;
	}while(res=='s'||res=='S');
		
	cout<<"____Mostrar notas___"<<endl;
	for(int i=0;i<total;i++){
		cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;
		}


*//*
	
	int total=0,*p_notas;
	p_notas= new int[total];
	char res;

	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n):";
		cin>>res;
	}while(res=='s'||res=='S');
		
	cout<<"____Mostrar notas___"<<endl;
	for(int i=0;i<total;i++){
		cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;
		}
		delete [] p_notas;
*/
	int fil=0, col=0, **pm_notas;
	cout<<"Ingrese la cantidad de Estudiantes: ";
	cin>>fil;
	cout<<"Ingrese la cantidad de notas por estudiante: ";
	cin>>col;
	
	
	pm_notas=new int*[fil];
	for(int i=0;i<fil;i++){
		pm_notas[i]=new int[col];
	}
	for(int i=0;i<fil;i++){
		cout<<"____Estudiante_____"<<i<<endl;
		for(int ii=0;ii<fil;ii++){
			cout<<"Notas:"<<ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);
		}
		cout<<"_________"<<endl;
	}
	cout<<"-------------Mostrar notas-----------"<<endl;
	
	for(int i=0;i<fil;i++){
	
		for(int ii=0;ii<fil;ii++){	
			cout<<((pm_notas+i)+ii)<<endl;
		}
		cout<<"_________"<<endl;
	}
	for(int i=0;i<fil;i++){
		delete [] pm_notas[i];
	}
	delete [] pm_notas;
	
	system("pause");
};