'''age=int(input("enter age\n"))
if age<12:
    print("pay 150\n")
if age<18:
    print("pay 250\n")
if age>=18:
    print("pay 500\n")'''


height=int(input("enter ur height\n"))
bill=0
if(height>=3):                  
    print("u can ride\n")
    age=int(input("enter ur age\n"))
    if(age<=12):
         bill=150
         print("pay 150 rs\n")
    elif(age>12 and age<=18):
         bill=250
         print("pay 250 rs\n")
    elif(age>18):
         bill=250
         print("pay 500 rs\n")
    want_photo=input("do u want to take photo:(Y/N)")
    if want_photo=='Y':
         bill=bill+50
         print(f"ur total bill is {bill}")
    else:
        print(f"ur bill is {bill}")

else:
    print("u cant ride\n")

