import random 
import time
arr=[]
tiempoTotal=[]
def quickSort(array, low, high):
  if low < high:
    pi = partition(array, low, high)
  
    quickSort(array, low, pi - 1)
    quickSort(array, pi + 1, high)
 
def partition(array, low, high):  
  pivot = array[high]
  
  i = low - 1
 
  for j in range(low, high):
    if array[j] <= pivot:
      i = i + 1
      (array[i], array[j]) = (array[j], array[i])
  
  (array[i + 1], array[high]) = (array[high], array[i + 1])
  
  return i + 1

def mostrar():
    for i in arr:
        print(i)


for i in range(100000):
        num=random.randint(0,100000)
        arr.append(num)
mostrar()
#100
tiempoInicio=time.time()
quickSort(arr, 0, 100-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#500
tiempoInicio=time.time()
quickSort(arr,0,500-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#1000
tiempoInicio=time.time()
quickSort(arr,0,1000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#2000
tiempoInicio=time.time()
quickSort(arr,0,2000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#3000
tiempoInicio=time.time()
quickSort(arr,0,3000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#4000
tiempoInicio=time.time()
quickSort(arr,0,4000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#5000
tiempoInicio=time.time()
quickSort(arr,0,5000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#6000
tiempoInicio=time.time()
quickSort(arr,0,6000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#7000
tiempoInicio=time.time()
quickSort(arr,0,7000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#8000
tiempoInicio=time.time()
quickSort(arr,0,8000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#9000
tiempoInicio=time.time()
quickSort(arr,0,9000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#10000
tiempoInicio=time.time()
quickSort(arr,0,10000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#20000
tiempoInicio=time.time()
quickSort(arr,0,20000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#30000
tiempoInicio=time.time()
quickSort(arr,0,30000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#40000
tiempoInicio=time.time()
quickSort(arr,0,40000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#50000
tiempoInicio=time.time()
quickSort(arr,0,50000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#60000
tiempoInicio=time.time()
quickSort(arr,0,60000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#70000
tiempoInicio=time.time()
quickSort(arr,0,70000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#80000
tiempoInicio=time.time()
quickSort(arr,0,80000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)
#90000
tiempoInicio=time.time()
quickSort(arr,0,90000-1)
tiempoFinal=time.time()
tiempoTotal.append((tiempoFinal-tiempoInicio)*1000)

#100000
tiempoInicio=time.time()
quickSort(arr,0,100000-1)
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


