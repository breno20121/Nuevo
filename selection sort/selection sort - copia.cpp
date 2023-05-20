#include<iostream>
#include<stdlib.h>// para los atoi y atof
#include <conio.h>
#include<cstdlib>
#include<cmath>
#include<fstream>
#include<ctime>
using namespace std;

void selection_sort(int a[], int length);
void mostrar(int arr[], int n);
void selectionSort(int a[], int length)
{
   
  for (int i = 0; i < (length - 1); i++)
  {
  
    int min_pos = i;
    for (int j = i + 1; j < length; j++)
    {
      if (a[j] < a[min_pos])
      {
        min_pos = j;
      }
    }
  
    if (min_pos != i)
    {
      int temp = a[i];
      a[i] = a[min_pos];
      a[min_pos] = temp;
    }
  }
}

void mostrar(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] <<endl;
  
}
int main()
{
  int valor[100000] = {};
  int n=100000,limite_inferior=0,limite_superior=100000;
  int t1[21]={};
  
  srand(time(NULL));
clock_t t;

for(int i=0;i<n;i++){
	valor[i]=limite_inferior+rand()%(limite_superior+1-limite_inferior);
	cout<<"Numero:	"<<valor[i]<<endl;
}	
//100
t=clock();
selectionSort(valor, 100);
mostrar(valor, 100);
t=clock()-t;
t1[0]=(float(t)/CLOCKS_PER_SEC)*1000;

//500
t=clock();
selectionSort(valor, 500);
mostrar(valor, 500);
t=clock()-t;
t1[1]=(float(t)/CLOCKS_PER_SEC)*1000;
//1000
t=clock();
selectionSort(valor, 1000);
mostrar(valor, 1000);
t=clock()-t;
t1[2]=(float(t)/CLOCKS_PER_SEC)*1000;
//2000
selectionSort(valor, 2000);
mostrar(valor, 2000);
t=clock()-t;
t1[3]=(float(t)/CLOCKS_PER_SEC)*1000;
//3000
selectionSort(valor, 3000);
mostrar(valor, 3000);
t=clock()-t;
t1[4]=(float(t)/CLOCKS_PER_SEC)*1000;
//4000
selectionSort(valor, 4000);
mostrar(valor, 4000);
t=clock()-t;
t1[5]=(float(t)/CLOCKS_PER_SEC)*1000;
//5000
selectionSort(valor, 5000);
mostrar(valor, 5000);
t=clock()-t;
t1[6]=(float(t)/CLOCKS_PER_SEC)*1000;
//6000
selectionSort(valor, 6000);
mostrar(valor, 6000);
t=clock()-t;
t1[7]=(float(t)/CLOCKS_PER_SEC)*1000;
//7000
selectionSort(valor, 7000);
mostrar(valor, 7000);
t=clock()-t;
t1[8]=(float(t)/CLOCKS_PER_SEC)*1000;
//8000
selectionSort(valor, 8000);
mostrar(valor, 8000);
t=clock()-t;
t1[9]=(float(t)/CLOCKS_PER_SEC)*1000;
//9000
selectionSort(valor, 9000);
mostrar(valor, 9000);
t=clock()-t;
t1[10]=(float(t)/CLOCKS_PER_SEC)*1000;
//10000
selectionSort(valor, 10000);
mostrar(valor, 10000);
t=clock()-t;
t1[11]=(float(t)/CLOCKS_PER_SEC)*1000;
//20000
selectionSort(valor, 20000);
mostrar(valor, 20000);
t=clock()-t;
t1[12]=(float(t)/CLOCKS_PER_SEC)*1000;
//30000
selectionSort(valor, 30000);
mostrar(valor, 30000);
t=clock()-t;
t1[13]=(float(t)/CLOCKS_PER_SEC)*1000;
//40000
selectionSort(valor, 40000);
mostrar(valor, 40000);
t=clock()-t;
t1[14]=(float(t)/CLOCKS_PER_SEC)*1000;
//50000
selectionSort(valor, 50000);
mostrar(valor, 50000);
t=clock()-t;
t1[15]=(float(t)/CLOCKS_PER_SEC)*1000;
//60000
selectionSort(valor, 60000);
mostrar(valor, 60000);
t=clock()-t;
t1[16]=(float(t)/CLOCKS_PER_SEC)*1000;

//70000

selectionSort(valor, 70000);
mostrar(valor, 70000);
t=clock()-t;
t1[17]=(float(t)/CLOCKS_PER_SEC)*1000;
//80000
selectionSort(valor, 80000);
mostrar(valor, 80000);
t=clock()-t;
t1[18]=(float(t)/CLOCKS_PER_SEC)*1000;
//90000
selectionSort(valor, 90000);
mostrar(valor, 90000);
t=clock()-t;
t1[19]=(float(t)/CLOCKS_PER_SEC)*1000;

//100000
selectionSort(valor, 100000);
mostrar(valor, 100000);
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


