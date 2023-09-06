size=input("enter which size of pizza u want(S/M/L):")
bill=0
if size=='S':
    bill=100
    print("pay 100rs\n")
elif size=='M':
    bill=200
    print("pay 200rs\n")
else: 
    bill=300
    print("pay 300rs\n")
add_pepperoni=input("do u need pepperoni for pizza:(Yes/NO)")
if add_pepperoni=='YES':
    if size=='S':
       bill=bill+30
    else:
       bill=bill+50
cheese=input("do u need extra cheese for any pizza:(YES/NO)")
if cheese=='YES':
    bill=bill+20

print(f"ur total bill is {bill}")
