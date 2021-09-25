def recoder(arr,n):
    j=0
    for i in range(n):
        if arr[i]!=0:
            arr[j]=arr[i]
            j+=1
    for i in range(j,n):
        arr[i]=0
#code`
arr=[6,0,8,2,3,0,4,0,1]
n = len(arr)
recoder(arr,n)
print(arr)