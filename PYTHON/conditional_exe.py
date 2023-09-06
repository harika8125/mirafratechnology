weight=int(input("enter ur weight\n"))
height=float(input("enter ur height\n"))
BMI=weight/height*height
print(BMI)
if BMI<=18.5:
    print("u r under weight\n")
elif BMI<=25:
    print("u r normal weight\n")
elif BMI>25 and BMI<=30:
    print("u r over weight\n")
elif BMI>30 and BMI<=35:
    print("u r obese\n")
else:
    print("u r stage2 in obese\n")
