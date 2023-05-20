# Para acumular el subárbol enraizado en el índice i.
# n es el tamaño del montón
 
 
def heapify(arr, n, i):
    largest = i  # Inicializar el mayor como root
    l = 2 * i + 1  # izquierda = 2*i + 1
    r = 2 * i + 2  # derecha = 2*i + 2
 
# Ver si el hijo izquierdo de la raíz existe y es
 # mayor que la raiz
 
    if l < n and arr[i] < arr[l]:
  
        largest = l
 
 # Ver si el hijo derecho de la raíz existe y es
 # mayor que la raiz
 
    if r < n and arr[largest] < arr[r]:
        largest = r
 
  # Cambiar raíz, si es necesario
 
    if largest != i:
        (arr[i], arr[largest]) = (arr[largest], arr[i])  # swap
 
  # Apila la raíz.
 
        heapify(arr, n, largest)
 
 
# La función principal para ordenar una matriz de tamaño dado
 
def heapSort(arr):
    n = len(arr)
 
# Construir un maxheap.
 # Dado que el último padre estará en ((n//2)-1), podemos comenzar en esa ubicación.
 
    for i in range(n // 2 - 1, -1, -1):
        heapify(arr, n, i)
 
 # Elementos extraídos uno por uno
 
    for i in range(n - 1, 0, -1):
        (arr[i], arr[0]) = (arr[0], arr[i])  # intercambiar
        heapify(arr, i, 0)
 
 
# Código del controlador para probar arriba
 
arr = [12, 11, 13, 5, 6, 7, 8,21,22,24]
heapSort(arr)
n = len(arr)
print('Sorted array is')
for i in range(n):
    print(arr[i])
 
