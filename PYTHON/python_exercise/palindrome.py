n=int(input("enter a number"))
result=0
temp=n
while n!=0:
    palindrome=n%10
    result=result*10+palindrome
    n=n//10
if(temp==result):
    print("palindrome",result) 
else:
    print("not palindrome",result)


#palindrome for string
a=input("enter string")
b=a[::-1]
print(b)
if a==b:
    print("palindrome")
else:
    print("not a palindrome")

~
~
