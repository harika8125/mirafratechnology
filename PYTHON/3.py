'''a=int(input("enter a number\n"))
b=int(input("enter another number\n"))
if a>b:
    print(a)
else:
    print(b)'''


a=int(input("enter a number\n"))
b=int(input("enter another number\n"))
c=int(input("enter another number\n"))
if a>b and a>c:
    print(a)
elif b>c and b>a:
    print(b)
else:
    print(c)
