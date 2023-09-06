'''rollno=[1,2,3,4,5]
print(rollno)'''


'''names=["harika",'arvind']
print(names)'''



'''mixed_list=[1,2,"harika",4,"arvind"]
print(mixed_list)'''


'''rollno=[1,2,3,4,5,1,2] #list allows duplicates also
print(rollno)'''


'''rollno=['a','b','c']
print(rollno)'''


'''rollno=[1,2,3,4,5]
print(rollno[0])'''


'''rollno=[1,2,3,4,5]
print(len(rollno))'''

'''rollno=[1,2,3,4,5]
print(rollno[-1])'''



#List Slicing

'''numbers=[10,0,-1,7]
print(numbers[0:4])'''

'''numbers=[10,0,-1,7,8]
print(numbers[0:])'''

'''numbers=[10,0,-1,7]
print(numbers[:4])'''

'''numbers=[10,0,-1,7]
print(numbers[:])'''


#extended slicing


'''numbers=[10,0,-1,7,8,10,67]
print(numbers[0:5:3])'''

'''numbers=[10,0,-1,7,8,10,67]
print(numbers[0::3])'''

'''numbers=[1,2,3,4,5]
print(numbers[0:4:2])'''


#sort the list
'''numbers=[10,0,-1,7,8,10,-67]
numbers.sort()
print(numbers)'''

#reverse the list
'''numbers=[10,0,-1,7,8,10,-67]
numbers.reverse()
print(numbers)'''


#minimum element in the list
'''numbers=[10,0,-1,7,8,10,-67]
print(min(numbers))'''

#maximum element in the list
'''numbers=[10,0,-1,7,8,10,-67]
print(max(numbers))'''


#we cannot apply sort function on mixed_list it will throw an error
'''numbers=[10,0,-1,"harika","arvind",8]
numbers.sort()
print(numbers)'''

#we can add elements in the list  1st method append(we can add element in the list)
'''numbers=[10,0,-1,7,8,10,-67]
numbers.append(22)
print(numbers)'''


#we can add elements in the list  2st method insert(we can add element in the particular position)
'''numbers=[10,0,-1,7,8,10,-67]
numbers.insert(2,28)
numbers.insert(3,300)
print(numbers)'''

'''numbers=[1,2,3,4,5]
numbers.insert(2,[10,20,30])
print(numbers)'''


#we can add elements in the list  3rd method extend(we can add more element in the list)
'''numbers=[10,0,-1,7,8,10,-67]
numbers.extend([22,28,12,11,5])
print(numbers)'''


'''numbers=[10,0,-1,7,8,10,-67]
numbers.extend(2,[22,28,12])
print(a)'''

#we can change or modify the value
'''numbers=[10,0,-1,7,8,10,-67]
numbers[6]=28
print(numbers)'''


#we can change or modify more than one value at a time
'''numbers=[10,0,-1,7,8,10,-67]
numbers[0:4]=[10,20,30,40]
print(numbers)'''

#we can print the index of a particular number
'''numbers=[10,0,-1,7,8,10,-67]
x=numbers.index(10)
print(x)'''

#count the repeated value
'''numbers=[10,-1,0,7,8,0,10,-67,0]
a=numbers.count(0)
print(a)'''

#if u want to remove u have 2 methods
'''numbers=[10,-1,0,7,8,0,10,-67,0]
numbers.remove(0)
print(numbers)'''

#we can remove an element
'''numbers=[10,-1,0,7,8,0,10,-67,0]
numbers.remove(0)
print(numbers)'''

#we can pop the element means deleting last element
'''numbers=[10,-1,0,7,8,0,10,-67,0]
numbers.pop()
print(numbers)'''


#we can pop the element means deleting element with specific position
numbers=[10,-1,0,7,8,0,10,-67,0]
print(numbers.pop(1))
print(numbers)


