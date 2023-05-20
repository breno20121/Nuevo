arr=[1,8,10,20,5]

band=False
while band==False:
    band=True
    for i in range(4):
        if arr[i]>arr[i+1]:
            aux=arr[i]
            arr[i]=arr[i+1]
            arr[i+1]=aux
            band=False

print(arr)