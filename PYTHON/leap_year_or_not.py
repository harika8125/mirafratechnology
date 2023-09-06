'''year=int(input("enter a year\n"))
if year%4==0:
    print("it is a leap year\n")
elif year%100==0:
    print("it is not a leap year\n")
elif year%400==0:
    print("it is a leap year\n")
else:
    print("it is not a leap year\n")'''



'''year=int(input("enter a year\n"))
if year%4==0:
    if year%100==0:
        if year%400==0:
            print("leap year\n")
        else:
            print("not a leap yaer\n")
    else:
        print("leap year\n")
else:
        print("not a leap year\n")'''


year=int(input("enter a year\n"))
if(year%4==0)or(year%100!=0 and year%400==0):
    print("leap year\n")

else:
    print("not a leap year\n")

