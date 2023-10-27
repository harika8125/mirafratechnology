t1=0
t2=1
print(t1)
print(t2)
n=int(input("enter a number"))
for i in range(n):
    t3=t1+t2
    t1=t2
    t2=t3
    print(t3)
