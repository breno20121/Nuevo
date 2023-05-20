import random 
import time
arr=[]
tiempoTotal=[]
def merge(arr, l, m, r):
    n1 = m - l + 1
    n2 = r - m
 
    L = [0] * (n1)
    R = [0] * (n2)
 
    for i in range(0, n1):
        L[i] = arr[l + i]
 
    for j in range(0, n2):
        R[j] = arr[m + 1 + j]
 
    
    i = 0     
    j = 0     
    k = l     
 
    while i < n1 and j < n2:
        if L[i] <= R[j]:
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1
        k += 1
 

    while i < n1:
        arr[k] = L[i]
        i += 1
        k += 1
 

    while j < n2:
        arr[k] = R[j]
        j += 1
        k += 1
 
def mergeSort(arr, l, r):
    if l < r:
 

        m = l+(r-l)//2
 
        mergeSort(arr, l, m)
        mergeSort(arr, m+1, r)
        merge(arr, l, m, r)
 
 
def mostrar():
    for i in arr:
        print(i)


for i in range(100000):
        num=random.randint(0,100000)
        arr.append(num)
mostrar()
#100
tiempoInicio=time.time()
mergeSort(arr, 0, 100-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#500
tiempoInicio=time.time()
mergeSort(arr,0,500-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#1000
tiempoInicio=time.time()
mergeSort(arr,0,1000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#2000
tiempoInicio=time.time()
mergeSort(arr,0,2000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#3000
tiempoInicio=time.time()
mergeSort(arr,0,3000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#4000
tiempoInicio=time.time()
mergeSort(arr,0,4000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#5000
tiempoInicio=time.time()
mergeSort(arr,0,5000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#6000
tiempoInicio=time.time()
mergeSort(arr,0,6000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#7000
tiempoInicio=time.time()
mergeSort(arr,0,7000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#8000
tiempoInicio=time.time()
mergeSort(arr,0,8000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#9000
tiempoInicio=time.time()
mergeSort(arr,0,9000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#10000
tiempoInicio=time.time()
mergeSort(arr,0,10000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#20000
tiempoInicio=time.time()
mergeSort(arr,0,20000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#30000
tiempoInicio=time.time()
mergeSort(arr,0,30000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#40000
tiempoInicio=time.time()
mergeSort(arr,0,10000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#50000
tiempoInicio=time.time()
mergeSort(arr,0,50000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#60000
tiempoInicio=time.time()
mergeSort(arr,0,40000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#70000
tiempoInicio=time.time()
mergeSort(arr,0,70000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#80000
tiempoInicio=time.time()
mergeSort(arr,0,80000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)
#90000
tiempoInicio=time.time()
mergeSort(arr,0,90000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#100000
tiempoInicio=time.time()
mergeSort(arr,0,100000-1)
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
 
