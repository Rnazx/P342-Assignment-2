sum=0
nofdist=0
#displaying the grid
for i in range(1,14):
    if (i>1): print('')
    for j in range(1,7):
        if (i%2!=0): print("  |  ",end='')
        else:  print("--o--",end='')
#calculating sum of all distances and no. of distances
for i in range(1,7):
    for j in range(1,7):
        for k in range(1,7):
            for l in range(1,7):
                sum+=abs(i-k)+abs(j-l)
                nofdist+=1
print("\nThe average distance between two points is: ",sum/nofdist)
