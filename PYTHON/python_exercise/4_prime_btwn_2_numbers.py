a=int(input("enter a number\n"))
b=int(input("enter another number\n"))
for i in range(a,b+1):
    count=0
    for j in range(1,b):
        if i%j==0:
            count=count+1
    if count==2:
        print("prime\n",i)
    else:
        print("not prime\n",i)


'''#using functions
def prime_btween_2(a,b):
    for i in range(a,b):
        count=0
        for j in range(1,b):
            if i%j==0:
                count=count+1
        if count==2:
            print("prime\n",i)
        else
            print("not prime\n",i)
a=int(input("enter a number\n"))
b=int(input("enter another number\n"))
prime_btween_2(a,b)'''
