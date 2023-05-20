def countSort(arr):
    size = len(arr)
    output = [0] * size

   # Inicializar matriz de conteo
    count = [0] * 10

# Almacenar el conteo de cada elemento en la matriz de conteo
    for i in range(0, size):
        count[arr[i]] += 1

    # Almacenar el conteo acumulativo
    for i in range(1, 10):
        count[i] += count[i - 1]

  # Encuentra el índice de cada elemento de la matriz original en la matriz de conteo
    # colocar los elementos en la matriz de salida
    i = size - 1
    while i >= 0:
        output[count[arr[i]] - 1] = arr[i]
        count[arr[i]] -= 1
        i -= 1

    # Copie los elementos ordenados en la matriz original
    for i in range(0, size):
        arr[i] = output[i]

 

def mostrar():
    for i in lista:
        print(i)

lista=[4, 2, 2, 8, 3, 3, 1]
mostrar()
countSort(lista)
print()
mostrar()

'''data = [4, 2, 2, 8, 3, 3, 1]
countSort(data)
print("Sorted Array in Ascending Order: ")
print(data)'''