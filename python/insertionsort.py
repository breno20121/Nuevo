def insertionSort(array):

    for step in range(1, len(array)):
        key = array[step]
        j = step - 1
        
     # Compara la clave con cada elemento a la izquierda hasta encontrar un elemento más pequeño que él
        # Para el orden descendente, cambie key<array[j] a key>array[j].        
        while j >= 0 and key < array[j]:
            array[j + 1] = array[j]
            j = j - 1
        
# Coloque la llave después del elemento justo más pequeño que él.
        array[j + 1] = key


data = [9, 5, 1, 4, 3]
insertionSort(data)
print('Sorted Array in Ascending Order:')
print(data)