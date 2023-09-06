name="harika"
age=23
height=4.8
#print("my name is "+name, "age is " +str(age), "and height is " + str(height))
#print("my name is:"+name,"iam "+str(age),"years old")
#print("my name is:",name,"age is ",age,"and height is ",height)  #without plus symbol also i can print but if one comma also missed u get an error


#print(f"my name is:{name} age is {age} and height is {height}")  #without plus symbol also i can print but if one comma also missed u get an error


#print(f"my father age is {age*2}")


age=int(input("enter ur current age\n"))
years_left=90-age
days_left=years_left*365
months_left=years_left*12
weeks_left=years_left*52
print(f"u have {days_left} days,{weeks_left} weeks and {months_left} months and {years_left} years left")


