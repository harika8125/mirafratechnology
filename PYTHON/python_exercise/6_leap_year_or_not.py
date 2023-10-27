year=int(input("enter year"))
if(year%100==0)and(year%400==0):
    print(f"{year} is a leap year")
elif(year%4==0)and(year%100!=0):
    print(f"{year} is a leap year")
else:
    print(f"{year} is not a leap year")


#using functions
def leapyear(year):
    if(year%100==0)and(year%400==0):
        print(f"{year} is a leap year")
    elif(year%4==0)and(year%100!=0):
        print(f"{year} is a leap year")
    else:
        print(f"{year} is not a leap year")

year=int(input("enter year"))
leapyear(year)
~
~
~
~
