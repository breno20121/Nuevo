import random 
import time
arr=[]
tiempoTotal=[]
def heapify(arr, n, i):
    largest = i 
    l = 2 * i + 1  
    r = 2 * i + 2  
 
    if l < n and arr[i] < arr[l]:
  
        largest = l
 
 
    if r < n and arr[largest] < arr[r]:
        largest = r
 
    if largest != i:
        (arr[i], arr[largest]) = (arr[largest], arr[i])  
 
        heapify(arr, n, largest)
 
def heapSort(arr,n):
    

 
    for i in range(n // 2 - 1, -1, -1):
        heapify(arr, n, i)
 
    for i in range(n - 1, 0, -1):
        (arr[i], arr[0]) = (arr[0], arr[i])  
        heapify(arr, i, 0)
 

def mostrar():
    for i in arr:
        print(i)


for i in range(100000):
        num=random.randint(0,100000)
        arr.append(num)
mostrar()
#100
tiempoInicio=time.time()
heapSort(arr,100)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#500
tiempoInicio=time.time()
heapSort(arr,500)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#1000
tiempoInicio=time.time()
heapSort(arr,1000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#2000
tiempoInicio=time.time()
heapSort(arr,2000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#3000
tiempoInicio=time.time()
heapSort(arr,3000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#4000
tiempoInicio=time.time()
heapSort(arr,4000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#5000
tiempoInicio=time.time()
heapSort(arr,5000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#6000
tiempoInicio=time.time()
heapSort(arr,6000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#7000
tiempoInicio=time.time()
heapSort(arr,7000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#8000
tiempoInicio=time.time()
heapSort(arr,8000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#9000
tiempoInicio=time.time()
heapSort(arr,9000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#10000
tiempoInicio=time.time()
heapSort(arr,10000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#20000
tiempoInicio=time.time()
heapSort(arr,20000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#30000
tiempoInicio=time.time()
heapSort(arr,30000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#40000
tiempoInicio=time.time()
heapSort(arr,40000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#50000
tiempoInicio=time.time()
heapSort(arr,50000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#60000
tiempoInicio=time.time()
heapSort(arr,60000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#70000
tiempoInicio=time.time()
heapSort(arr,70000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#80000
tiempoInicio=time.time()
heapSort(arr,80000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#90000
tiempoInicio=time.time()
heapSort(arr,90000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#100000
tiempoInicio=time.time()
heapSort(arr,100000)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

print("el tiempo de ordenamiento de 100 numeros aleatorios es ",tiempoTotal[0]," milisegundos")
print("el tiempo de ordenamiento de 500 numeros aleatorios es ",tiempoTotal[1]," milisegundos")
print("el tiempo de ordenamiento de 1000 numeros aleatorios es ",tiempoTotal[2]," milisegundos")
print("el tiempo de ordenamiento de 2000 numeros aleatorios es ",tiempoTotal[3]," milisegundos")
print("el tiempo de ordenamiento de 3000 numeros aleatorios es ",tiempoTotal[4]," milisegundos")
print("el tiempo de ordenamiento de 4000 numeros aleatorios es ",tiempoTotal[5]," milisegundos")
print("el tiempo de ordenamiento de 5000 numeros aleatorios es ",tiempoTotal[6]," milisegundos")
print("el tiempo de ordenamiento de 6000 numeros aleatorios es ",tiempoTotal[7]," milisegundos")
print("el tiempo de ordenamiento de 7000 numeros aleatorios es ",tiempoTotal[8]," milisegundos")
print("el tiempo de ordenamiento de 8000 numeros aleatorios es ",tiempoTotal[9]," milisegundos")
print("el tiempo de ordenamiento de 9000 numeros aleatorios es ",tiempoTotal[10]," milisegundos")
print("el tiempo de ordenamiento de 10000 numeros aleatorios es ",tiempoTotal[11]," milisegundos")
print("el tiempo de ordenamiento de 20000 numeros aleatorios es ",tiempoTotal[12]," milisegundos")
print("el tiempo de ordenamiento de 30000 numeros aleatorios es ",tiempoTotal[13]," milisegundos")
print("el tiempo de ordenamiento de 40000 numeros aleatorios es ",tiempoTotal[14]," milisegundos")
print("el tiempo de ordenamiento de 50000 numeros aleatorios es ",tiempoTotal[15]," milisegundos")
print("el tiempo de ordenamiento de 60000 numeros aleatorios es ",tiempoTotal[16]," milisegundos")
print("el tiempo de ordenamiento de 70000 numeros aleatorios es ",tiempoTotal[17]," milisegundos")
print("el tiempo de ordenamiento de 80000 numeros aleatorios es ",tiempoTotal[18]," milisegundos")
print("el tiempo de ordenamiento de 90000 numeros aleatorios es ",tiempoTotal[19]," milisegundos")
print("el tiempo de ordenamiento de 100000 numeros aleatorios es ",tiempoTotal[20]," milisegundos")

 
