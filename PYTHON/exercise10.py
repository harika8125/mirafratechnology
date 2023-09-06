#name='HArIka'
#print(name.lower())

#name='HArIka'
#print(name.upper())


name1=input("enter a girl name\n")
name2=input("enter a boy name\n")
c=(name1+" " +name2)
d=(c.lower())
t=d.count('t')
r=d.count('r')
u=d.count('u')
e=d.count('e')

true=t+r+u+e

l=d.count('l')
o=d.count('o')
v=d.count('v')
e=d.count('e')

love=l+o+v+e

score=int(str(true)+str(love))
if(score<10 and score>90):
    print(f"ur score is {score} so we go to mentos\n")
elif(score>40 and score<50):
    print(f"ur score is {score} so u r alright\n")
else:
    print(f"ur score is {score}\n")

