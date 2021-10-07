n=int(input("Enter the number"))
li=[True for i in range(n)]
li[0],li[1]=False,False
for i in range(2,n):
    if li[i]==True:
        for j in range(i*i,n,i):
            li[j]=False
for i in range(n):
    if li[i]==True:
        print(i,end=" ")