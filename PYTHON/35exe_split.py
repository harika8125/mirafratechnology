import random

'''text="harika priya meghana pavitra"
a=text.split(" ")
b=print(a)
b=random.randint(0,3)
print(b)
if b==0:
    print("harika will pay the bill")
elif b==1:
    print("priya will pay the bill")
elif b==2:
    print("meghana will pay the bill")
else:
    print("pavitra will pay the bill")'''


import random

names=input("enter everyones names separated by commas\n")
names_list=names.split(",")
length=len(names_list)
random_choice=random.randint(0,length-1)
print(f"{names_list[random_choice]} will pay the bill")
