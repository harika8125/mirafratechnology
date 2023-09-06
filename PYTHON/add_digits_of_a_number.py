'''num=input("enter a number")
a=num[0]
b=num[1]

print(int(a)+int(b))'''



'''num=input("enter a number\n")
sum=0
for i in num:
 sum=sum+int(i)
print(sum)'''


n=int(input("enter a number\n"))
sum=0
while(n!=0):
 sum=sum+(n%10)
 n=n//10
print(sum)

