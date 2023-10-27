a=int(input("enter a number\n"))
b=int(input("enter another number\n"))
for i in range(a,b):
     if i%2==0:
        print("even\n",i)
     else:
        print("odd\n",i)

#using functions
def even_odd(a,b):
    for i in range(a,b+1):
         if(i%2==0):
             print("even",i)
         else:
             print("odd",i)

a=int(input("enter a number"))
b=int(input("enter another number"))
even_odd(a,b)


#sum of even_odd
n=int(input("enter the num"))
esum=odsum=0
for i in range(1,n+1):
    if(i%2==0):
        esum+=i
    else:
        odsum+=i
print("esum=",esum)
print("odsum=",odsum)
~
