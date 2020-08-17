A=[1,2,3]
B=[4,5,6]
sum=[]
dprod=0
for i in range(3):
    sum.append(A[i]+B[i])
    dprod+=A[i]*B[i]
print("The sum of the two vectors is :",sum)
print("The dot product is :",dprod)
#A=(1,2,3) B=(4,5,6) => sum=(5,7,9) and dprod=32