a=int(input("enter a number\n"))
b=int(input("enter another number\n"))
sum=0
for i in range(a,b):
    count=0
    for j in range(1,b):
        if i%j==0:
            count=count+1
    if count==2:
        print("prime\n",i)
        sum=sum+i
print("prime=",sum)



#using functions
def prime_btween_2(a,b):
    sum=0
    for i in range(a,b):
        count=0
        for j in range(1,b):
                if i%j==0:
                    count=count+1
        if count==2:
            print("prime",i)
            sum=sum+i
        else:
            print("not prime")
            print(sum)
a=int(input("enter a number"))
b=int(input("enter another number"))
prime_btween_2(a,b)
~
