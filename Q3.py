def store(st):
    X=[]
    T=[]
    with open(st,'r+') as file:
        i=0
        while i<3:
            s=file.readline()
            p=s.split()
            j=0
            while j<3:
                T.append(float(p[j]))
                j=j+1
            X.append(T)
            T=[]
            i=i+1 
        return X 
#This is where you enter the name of the text file
'''txt_M=input(str("Enter the name of the file containing the first matrix "))+str(".txt")#for input textfile name
txt_N=input(str("Enter the name of the file containing the second matrix "))+str(".txt")
M=store(txt_M)
N=store(txt_N)'''
M=store("testA.txt")
N=store("testB.txt")
prod=[[],[],[]]
t=0
for i in range(3):
    for j in range(3):
        for k in range(3):
            t+=M[i][k]*N[k][j]
        prod[i].append(t)
        t=0
    j=0
print("The first Matrix is M: ")
for i in range(3):
    if(i>0):
        print('\n')
    for j in range(3):
        print(M[i][j],end="   ")
print('\n')
print("The second Matrix is N: ")
for i in range(3):
    if(i>0):
        print('\n')
    for j in range(3):
        print(N[i][j],end="   ")
print('\n')
print("The product of the two Matrices is MxN: ")
for i in range(3):
    if(i>0):
        print('\n')
    for j in range(3):
        print(prod[i][j],end="   ")
print('\n')
A=[3,4,5]
prod2=[]
s=0
for l in range(3):
    for k in range(3):
        s+= M[l][k]*A[k]
    prod2.append(s)
    s=0
print("The product of M and vector {0} is :\n{1}".format(A,prod2))
''' M=1 0 0      N=0 1 0
     0 0 1        0 0 1
     0 1 0        1 0 0

prod(MxN)=0 1 0 
     1 0 0
     0 0 1

A=(3,4,5) => MXA= (3,5,4)'''