sum=0
nofdist=0
for i in range(1,7):
    print("--o--",end='')#displaying grid
    for j in range(1,7):
        sum+=abs(i-j)#calculating sum of all distances and no. of distances
        nofdist+=1
print("\nThe average distance between two points is: ",sum/nofdist)