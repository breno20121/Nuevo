#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<cmath>
#include<fstream>
#include<ctime>

void escribir();
using namespace std;
int main(){
int n=100,limite_inferior=0,limite_superior=100;
escribir();

float valor;

srand(time(NULL));
for(int i=0;i<n;i++){
	valor=limite_inferior+rand()%(limite_superior+1-limite_inferior);
	cout<<"Numero:	"<<valor<<endl;
}


	return 0;
}
void escribir(){
	int n=7000,limite_inferior=0,limite_superior=7000;
	float valor;
	ofstream archivo;
	archivo.open("7000.txt");
	
	if(archivo.fail()){
		cout<<"no se pudo abrir el archivo";
		exit(1);
	}
	srand(time(NULL));
	for(int i=0;i<n;i++){
	valor=limite_inferior+rand()%(limite_superior+1-limite_inferior);
	archivo<<valor<<endl;
	
}
	
	
	archivo.close();
}
