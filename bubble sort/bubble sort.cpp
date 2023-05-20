#include<iostream>
#include<stdlib.h>// para los atoi y atof
#include <conio.h>
#include<cstdlib>
#include<cmath>
#include<fstream>
#include<ctime>
using namespace std;

void mostrar(int n,int valor[]);
void burbuja(int a,int valor[]);
void mostrar(int n,int valor[]){
		for(int i=0;i<n;i++){
		cout<<valor[i]<<endl;
	}
}

void burbuja(int a,int valor[]){
	int aux;
		for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(valor[j]>valor[j+1]){
				aux=valor[j];
				valor[j]=valor[j+1];
				valor[j+1]=aux;
			}
		}
	}
}
int main(){
	int i,j,aux;	
	int n=100000,limite_inferior=0,limite_superior=100000;
	int valor[100000]={};
	int t1[21]={};

srand(time(NULL));

for(int i=0;i<n;i++){
	valor[i]=limite_inferior+rand()%(limite_superior+1-limite_inferior);
	cout<<"Numero:	"<<valor[i]<<endl;
}

//ordenar burbuja
clock_t t;
//100
t=clock();
burbuja(100,valor);
t=clock()-t;
t1[0]=(float(t)/CLOCKS_PER_SEC)*1000;
cout<<endl;
//500
t=clock();
burbuja(500,valor);
t=clock()-t;
t1[1]=(float(t)/CLOCKS_PER_SEC)*1000;	
//1000
t=clock();
burbuja(1000,valor);
t=clock()-t;
t1[2]=(float(t)/CLOCKS_PER_SEC)*1000;
//2000
t=clock();
burbuja(2000,valor);
t=clock()-t;
t1[3]=(float(t)/CLOCKS_PER_SEC)*1000;
//3000
t=clock();
burbuja(3000,valor);
t=clock()-t;
t1[4]=(float(t)/CLOCKS_PER_SEC)*1000;
//4000
t=clock();
burbuja(4000,valor);
t=clock()-t;
t1[5]=(float(t)/CLOCKS_PER_SEC)*1000;
//5000
t=clock();
burbuja(5000,valor);
t=clock()-t;
t1[6]=(float(t)/CLOCKS_PER_SEC)*1000;
//6000
t=clock();
burbuja(6000,valor);
t=clock()-t;
t1[7]=(float(t)/CLOCKS_PER_SEC)*1000;
//7000
t=clock();
burbuja(7000,valor);
t=clock()-t;
t1[8]=(float(t)/CLOCKS_PER_SEC)*1000;
//8000
t=clock();
burbuja(8000,valor);
t=clock()-t;
t1[9]=(float(t)/CLOCKS_PER_SEC)*1000;
//9000
t=clock();
burbuja(9000,valor);
t=clock()-t;
t1[10]=(float(t)/CLOCKS_PER_SEC)*1000;
//10000
t=clock();
burbuja(10000,valor);
t=clock()-t;
t1[11]=(float(t)/CLOCKS_PER_SEC)*1000;
//20000
t=clock();
burbuja(20000,valor);
t=clock()-t;
t1[12]=(float(t)/CLOCKS_PER_SEC)*1000;
//30000
t=clock();
burbuja(30000,valor);
t=clock()-t;
t1[13]=(float(t)/CLOCKS_PER_SEC)*1000;
//40000
t=clock();
burbuja(40000,valor);
t=clock()-t;
t1[14]=(float(t)/CLOCKS_PER_SEC)*1000;
//50000
t=clock();
burbuja(50000,valor);
t=clock()-t;
t1[15]=(float(t)/CLOCKS_PER_SEC)*1000;
//60000
t=clock();
burbuja(60000,valor);
t=clock()-t;
t1[16]=(float(t)/CLOCKS_PER_SEC)*1000;

//70000
t=clock();
burbuja(70000,valor);
t=clock()-t;
t1[17]=(float(t)/CLOCKS_PER_SEC)*1000;
//80000
t=clock();
burbuja(80000,valor);
t=clock()-t;
t1[18]=(float(t)/CLOCKS_PER_SEC)*1000;
//90000
t=clock();
burbuja(90000,valor);
t=clock()-t;
t1[19]=(float(t)/CLOCKS_PER_SEC)*1000;
//100000
t=clock();
burbuja(100000,valor);
t=clock()-t;
t1[20]=(float(t)/CLOCKS_PER_SEC)*1000;
cout<<"el tiempo de ordenamiento de 100 numeros aleatorios es "<<t1[0]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 500 numeros aleatorios es "<<t1[1]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 1000 numeros aleatorios es "<<t1[2]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 2000 numeros aleatorios es "<<t1[3]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 3000 numeros aleatorios es "<<t1[4]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 4000 numeros aleatorios es "<<t1[5]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 5000 numeros aleatorios es "<<t1[6]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 6000 numeros aleatorios es "<<t1[7]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 7000 numeros aleatorios es "<<t1[8]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 8000 numeros aleatorios es "<<t1[9]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 9000 numeros aleatorios es "<<t1[10]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 10000 numeros aleatorios es "<<t1[11]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 20000 numeros aleatorios es "<<t1[12]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 30000 numeros aleatorios es "<<t1[13]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 40000 numeros aleatorios es "<<t1[14]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 50000 numeros aleatorios es "<<t1[15]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 60000 numeros aleatorios es "<<t1[16]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 70000 numeros aleatorios es "<<t1[17]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 80000 numeros aleatorios es "<<t1[18]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 90000 numeros aleatorios es "<<t1[19]<<" milisegundos"<<endl;
cout<<"el tiempo de ordenamiento de 100000 numeros aleatorios es "<<t1[20]<<" milisegundos"<<endl;
		return 0;
}


