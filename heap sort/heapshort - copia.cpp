#include<iostream>
#include<stdlib.h>// para los atoi y atof
#include <conio.h>
#include<cstdlib>
#include<cmath>
#include<fstream>
#include<ctime>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
 
   
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        
        heapify(arr, n, largest);
    }
}
 

void heapSort(int arr[], int n)
{
   
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
   
    for (int i = n - 1; i >= 0; i--) {
    
        swap(arr[0], arr[i]);
 
        
        heapify(arr, i, 0);
    }
}
 

void mostrar(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] <<endl;
    cout << "\n";
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
         for(int i=100/2 -1;i>=0;i--){
       heapify(valor,100,i);
   }
    heapSort(valor, 100);

    mostrar(valor, 100);
 t=clock()-t;
t1[0]=(float(t)/CLOCKS_PER_SEC)*1000; 
//500 
t=clock();
         for(int i=500/2 -1;i>=0;i--){
       heapify(valor,500,i);
   }
    heapSort(valor, 500);

    mostrar(valor, 500);
 t=clock()-t;
t1[1]=(float(t)/CLOCKS_PER_SEC)*1000;
//1000
t=clock();
         for(int i=1000/2 -1;i>=0;i--){
       heapify(valor,1000,i);
   }
    heapSort(valor, 1000);

    mostrar(valor, 1000);
 t=clock()-t;
t1[2]=(float(t)/CLOCKS_PER_SEC)*1000;
//2000
t=clock();
         for(int i=2000/2 -1;i>=0;i--){
       heapify(valor,2000,i);
   }
    heapSort(valor, 2000);

    mostrar(valor, 2000);
 t=clock()-t;
t1[3]=(float(t)/CLOCKS_PER_SEC)*1000;
//3000
t=clock();
         for(int i=3000/2 -1;i>=0;i--){
       heapify(valor,3000,i);
   }
    heapSort(valor, 3000);

    mostrar(valor, 3000);
 t=clock()-t;
t1[4]=(float(t)/CLOCKS_PER_SEC)*1000;
//4000
t=clock();
         for(int i=4000/2 -1;i>=0;i--){
       heapify(valor,4000,i);
   }
    heapSort(valor, 4000);

    mostrar(valor, 4000);
 t=clock()-t;
t1[5]=(float(t)/CLOCKS_PER_SEC)*1000;
//5000
t=clock();
         for(int i=5000/2 -1;i>=0;i--){
       heapify(valor,5000,i);
   }
    heapSort(valor, 5000);

    mostrar(valor, 5000);
 t=clock()-t;
t1[6]=(float(t)/CLOCKS_PER_SEC)*1000;
//6000
t=clock();
         for(int i=6000/2 -1;i>=0;i--){
       heapify(valor,6000,i);
   }
    heapSort(valor, 6000);

    mostrar(valor, 6000);
 t=clock()-t;
t1[7]=(float(t)/CLOCKS_PER_SEC)*1000;

//7000
t=clock();
         for(int i=7000/2 -1;i>=0;i--){
       heapify(valor,7000,i);
   }
    heapSort(valor, 7000);

    mostrar(valor, 7000);
 t=clock()-t;
t1[8]=(float(t)/CLOCKS_PER_SEC)*1000;
//8000
t=clock();
         for(int i=8000/2 -1;i>=0;i--){
       heapify(valor,8000,i);
   }
    heapSort(valor, 8000);

    mostrar(valor, 8000);
 t=clock()-t;
t1[9]=(float(t)/CLOCKS_PER_SEC)*1000;
//9000
t=clock();
         for(int i=9000/2 -1;i>=0;i--){
       heapify(valor,9000,i);
   }
    heapSort(valor, 9000);

    mostrar(valor, 9000);
 t=clock()-t;
t1[10]=(float(t)/CLOCKS_PER_SEC)*1000;
//10000
t=clock();
         for(int i=10000/2 -1;i>=0;i--){
       heapify(valor,10000,i);
   }
    heapSort(valor, 10000);

    mostrar(valor, 10000);
 t=clock()-t;
t1[11]=(float(t)/CLOCKS_PER_SEC)*1000;
//20000
t=clock();
         for(int i=20000/2 -1;i>=0;i--){
       heapify(valor,20000,i);
   }
    heapSort(valor, 20000);

    mostrar(valor, 20000);
 t=clock()-t;
t1[12]=(float(t)/CLOCKS_PER_SEC)*1000;
//30000
t=clock();
         for(int i=30000/2 -1;i>=0;i--){
       heapify(valor,30000,i);
   }
    heapSort(valor, 30000);

    mostrar(valor, 30000);
 t=clock()-t;
t1[13]=(float(t)/CLOCKS_PER_SEC)*1000;
//40000
t=clock();
         for(int i=40000/2 -1;i>=0;i--){
       heapify(valor,40000,i);
   }
    heapSort(valor, 40000);

    mostrar(valor, 40000);
 t=clock()-t;
t1[14]=(float(t)/CLOCKS_PER_SEC)*1000;
//50000
t=clock();
         for(int i=50000/2 -1;i>=0;i--){
       heapify(valor,50000,i);
   }
    heapSort(valor, 50000);

    mostrar(valor, 50000);
 t=clock()-t;
t1[15]=(float(t)/CLOCKS_PER_SEC)*1000;
//60000
t=clock();
         for(int i=60000/2 -1;i>=0;i--){
       heapify(valor,60000,i);
   }
    heapSort(valor, 60000);

    mostrar(valor, 60000);
 t=clock()-t;
t1[16]=(float(t)/CLOCKS_PER_SEC)*1000;
//70000
t=clock();
         for(int i=70000/2 -1;i>=0;i--){
       heapify(valor,70000,i);
   }
    heapSort(valor, 70000);

    mostrar(valor, 70000);
 t=clock()-t;
t1[17]=(float(t)/CLOCKS_PER_SEC)*1000;
//80000
t=clock();
         for(int i=80000/2 -1;i>=0;i--){
       heapify(valor,80000,i);
   }
    heapSort(valor, 80000);

    mostrar(valor, 80000);
 t=clock()-t;
t1[18]=(float(t)/CLOCKS_PER_SEC)*1000;
//90000
t=clock();
         for(int i=90000/2 -1;i>=0;i--){
       heapify(valor,90000,i);
   }
    heapSort(valor, 90000);

    mostrar(valor, 90000);
 t=clock()-t;
t1[19]=(float(t)/CLOCKS_PER_SEC)*1000;
//100000
t=clock();
         for(int i=100000/2 -1;i>=0;i--){
       heapify(valor,100000,i);
   }
    heapSort(valor, 100000);

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
