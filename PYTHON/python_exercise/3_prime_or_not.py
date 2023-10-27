n=int(input("enter a number\n"))
count=1
for i in range(1,n):
    if n%i==0:
        count=count+1
if count==2:
    print("number is prime\n")
else:
    print("number is not prime\n")

#using functions
def prime(n):
    count=1
    for i in range(1,n):
        if n%i==0:
            count=count+1
    if count==2:
        print("prime")
    else:
        print("not prime")

n=int(input("enter a number"))
prime(n)
~
