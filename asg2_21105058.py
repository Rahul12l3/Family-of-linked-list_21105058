                                 #1st Assignment
print("                    1st question(a)")
str="Python is a case sensitive language"
print("The length of the string is: ",len(str))

print("                    1st question(b)")
print("The string in reversed order is:",str[::-1])

print("                    1st question(c)")
str_new=str[10:26]
print("str_new: ",str_new)

print("                    1st question(d)")
print("After replacing: ",str.replace("a case sensitive", "object oriented"))

print("                    1st question(e)")
print("The index of substring 'a' is: ",str.find("a"))

print("                    1st question(f)")
print("After removing all white spaces: ",str.replace(" ",""))

print("                    2nd question")
name='Rahul'
SID=21105058
dep_name='ECE'
CGPA=9.9
print("Hey,%s Here!"%name)
print("My SID is %d"%SID)
print("I am from %s department and my CGPA is %d"%(dep_name,CGPA))

print("                    3rd question")
a=56
b=10
print("a&b: ",(a&b))
print("a|b: ",(a|b))
print("a^b: ",(a^b))
print("left shifting both a and b with 2 bits: ",(a<<2,b<<2))
print("right shifting a with 2 bits and b with 4 bits: ",(a>>2,b>>4))

print("                    4th question")
num1=float(input("enter first number: "))
num2=float(input("enter second number: "))
num3=float(input("enter third number: "))
if(num1>num2)and(num1>num3):
    print("the largest number is: ",num1)
elif(num2>num1)and(num2>num3):
    print("the largest number is: ",num2)
else:
    print("the largest number is: ",num3)

print("                    5th question")
string=input("Enter the string: ")
if {'name' in string}:
    print("Yes")
else:
    print("No")

print("                    6th question")
a=int(input("Enter length of 1st side: "))
b=int(input("Enter the length of 2nd side: "))
c=int(input("Enter the length of 3rd side: "))
if c>(a+b) or b>(a+c) or a>(b+c):
    print("No")
else:
    print("Yes")
