import random 
import time
arr=[]


for i in range(100):
        num=random.randint(0,100)
        arr.append(num)



#100 numeros
tiempoInicio=time.time()
band=False
while band==False:
    band=True
    for i in range(99):
            if arr[i]>arr[i+1]:
                aux=arr[i]
                arr[i]=arr[i+1]
                arr[i+1]=aux
                band=False
tiempoFinal=time.time()
tiempoTotal=(tiempoFinal-tiempoInicio)*1000
print("se tardo en ordenar 100 numeros aleatorios ",tiempoTotal," milisegundos")
